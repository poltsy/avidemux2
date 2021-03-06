/***************************************************************************
                        Q_mpdelogo.cpp  -  description
                             -------------------

			   flyDialog for MPlayer DeLogo filter

    copyright            : (C) 2004/2007 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "Q_logo.h"
#include "ADM_toolkitQt.h"
#include "ADM_imageLoader.h"
#include "DIA_fileSel.h"
#include "ADM_last.h"

#if 0
#define aprintf printf
#else
#define aprintf(...) {}
#endif
/**
 * 
 * @param z
 * @param w
 * @param h
 */
 ADM_LogoCanvas::ADM_LogoCanvas(QWidget *z, uint32_t w, uint32_t h) : ADM_QCanvas(z,w,h)
 {
     
 }
 /**
  * 
  */
 ADM_LogoCanvas::~ADM_LogoCanvas()
 {
     
 }

/**
 * 
 * @param event
 */
void ADM_LogoCanvas::mousePressEvent(QMouseEvent * event)
{
    aprintf("Pressed\n");
}
/**
 * 
 * @param event
 */
void ADM_LogoCanvas::mouseReleaseEvent(QMouseEvent * event)
{
    QPoint p=event->pos();
    int x=p.x();
    int y=p.y();

    if(x<0) x=0;
    if(y<0) y=0;    

    aprintf("Released %d %d\n",x,y);
    emit movedSignal(x,y);

}
/**
 * 
 * @param event
 */
void ADM_LogoCanvas::moveEvent(QMoveEvent * event)
{
    aprintf("Move\n");
}

/**
 * 
 * @param enabled
 * @return 
 */
bool                Ui_logoWindow::enableLowPart(bool enabled)
{
    ui.spinX->setEnabled(enabled);
    ui.spinY->setEnabled(enabled);
    if(false==enabled)
        ui.spinAlpha->setEnabled(enabled);
    ui.horizontalSlider->setEnabled(enabled);
    return true;
}
/**
 * 
 * @return 
 */
void                   Ui_logoWindow::imageSelect()
{
     
    char buffer[2048];
    std::string source;
    if(imageName.size())
        source=imageName;
    else
        source=lastFolder;
    if(FileSel_SelectRead(QT_TRANSLATE_NOOP("logo","Select Logo Image"),buffer,2048,source.c_str()))
    {
        admCoreUtils::setLastReadFolder(std::string(buffer));
        if(tryToLoadimage(buffer))
        {
            myLogo->sameImage();
        }
    }
}
/**
 * \fn tryToLoadimage
 * @param image
 * @return 
 */
bool                Ui_logoWindow::tryToLoadimage(const char *imageName)
{
    bool status=false;
    if(strlen(imageName))
    {
        ADMImage *im2=createImageFromFile(imageName);
        if(im2)
        {
            if(image) delete image;
            image=im2;
            imageWidth=image->GetWidth(PLANAR_Y);
            imageHeight=image->GetHeight(PLANAR_Y);            
            this->imageName=std::string(imageName);
            ui.labelImage->setText(this->imageName.c_str());
            
            if(image->GetReadPtr(PLANAR_ALPHA))
                ui.spinAlpha->setEnabled(false);
            else
                ui.spinAlpha->setEnabled(true);
            status=true;    
           
        }
    }
    enableLowPart(status);
    return status;
}

/**
    \fn ctor
*/

  Ui_logoWindow::Ui_logoWindow(QWidget *parent,  logo *param, ADM_coreVideoFilter *in) 
            : QDialog(parent)
  {
        uint32_t width,height;
        ui.setupUi(this);
        _in=in;
        
        image=NULL;;
        alpha=param->alpha;
        admCoreUtils::getLastReadFolder(lastFolder);
        if(param->logoImageFile.size())
        {
            if(tryToLoadimage(param->logoImageFile.c_str()))
            {
                imageName=param->logoImageFile;
            }
        }
        
        lock=0;
        // Allocate space for green-ised video
        width=in->getInfo()->width;
        height=in->getInfo()->height;

        canvas=new ADM_LogoCanvas(ui.graphicsView,width,height);
        
        myLogo=new flyLogo(this, width, height,in,canvas,ui.horizontalSlider);
        myLogo->param.x=param->x;
        myLogo->param.y=param->y;
        myLogo->param.alpha=param->alpha;
        myLogo->param.logoImageFile=std::string("");
        myLogo->_cookie=this;
        
        myLogo->setPreview(false);
#define SPINENTRY(x) ui.x
        SPINENTRY(spinX)->setMaximum(width);        
        SPINENTRY(spinY)->setMaximum(height);
        SPINENTRY(spinAlpha)->setMaximum(255);
        SPINENTRY(spinAlpha)->setMinimum(0);
        SPINENTRY(spinX)->setSingleStep(1);
        SPINENTRY(spinY)->setSingleStep(1);
        
        myLogo->upload();
        myLogo->sliderChanged();
        connect( ui.horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(sliderUpdate(int)));
        connect( ui.pushButtonSelect,SIGNAL(pressed()),this,SLOT(imageSelect()));
#define SPINNER(x) connect( ui.x,SIGNAL(valueChanged(int)),this,SLOT(valueChanged(int))); 
        SPINNER(spinX);
        SPINNER(spinY);
        SPINNER(spinAlpha);
        connect(canvas, SIGNAL(movedSignal(int,int)),this, SLOT(moved(int,int)));
        myLogo->sameImage();
        
        myLogo->addControl(ui.toolboxLayout);

        setModal(true);
        show();
        myLogo->adjustCanvasPosition();
        canvas->parentWidget()->setMinimumSize(30,30); // allow resizing after the dialog has settled
  }
/**
    \fn sliderUpdate
*/
void Ui_logoWindow::sliderUpdate(int foo)
{
    myLogo->sliderChanged();
}
/**
    \fn gather
*/
void Ui_logoWindow::gather(logo *param)
{
    myLogo->download();
#define DUPE(x)     param->x=myLogo->param.x;
    DUPE(x)
    DUPE(y)
    DUPE(alpha)
    param->logoImageFile=imageName;
    
}
/**
    \fn dtor
*/
Ui_logoWindow::~Ui_logoWindow()
{
    admCoreUtils::setLastReadFolder(lastFolder);
    if(myLogo) delete myLogo;
    myLogo=NULL; 
    if(canvas) delete canvas;
    canvas=NULL;
}
/**
    \fn valueChanged
*/

void Ui_logoWindow::valueChanged( int f )
{
    if(lock) return;
    lock++;
    myLogo->download();
    myLogo->sameImage();
    lock--;
}

/**
 * 
 * @param x
 * @param y
 */
void Ui_logoWindow::moved(int x,int y)
{
      if(lock) return;
      lock++;
      myLogo->setXy(x,y);
      myLogo->sameImage();      
      lock--;
}
/**
 * 
 * @param x
 */
 void Ui_logoWindow::preview(int x)
 {
     if(x==Qt::Checked)
     {
         myLogo->setPreview(true);
         myLogo->sameImage();
     }
     else
     {
         myLogo->setPreview(false);
         myLogo->sameImage();
     }
 }

/**
    \fn resizeEvent
*/
void Ui_logoWindow::resizeEvent(QResizeEvent *event)
{
    if(lock) return;
    if(!canvas->height())
        return;
    lock++;
    uint32_t graphicsViewWidth = canvas->parentWidget()->width();
    uint32_t graphicsViewHeight = canvas->parentWidget()->height();
    myLogo->fitCanvasIntoView(graphicsViewWidth,graphicsViewHeight);
    myLogo->adjustCanvasPosition();
    lock--;
}

/**
 * 
 * @param x
 * @param y
 * @return 
 */
bool flyLogo::setXy(int x,int y)
{
    if(x<0) x=0;
    if(y<0) y=0;
    Ui_logoWindow *parent=(Ui_logoWindow *)this->_cookie;
    double scale=(double)(parent->canvas->width()) / parent->_in->getInfo()->width;
    param.x= (int)((double)x / scale);
    param.y= (int)((double)y / scale);
    upload();
    return true;
}

//************************
/**
    \fn upload
*/
uint8_t flyLogo::upload(void)
{

    Ui_logoWindow *parent=(Ui_logoWindow *)this->_cookie;
#define MYSPIN(x) parent->ui.x
    MYSPIN(spinX)->setValue(param.x);
    MYSPIN(spinY)->setValue(param.y);
    MYSPIN(spinAlpha)->setValue(param.alpha);   
    parent->ui.labelImage->setText(parent->imageName.c_str());
    return 1;
}
/**
        \fn download
*/
uint8_t flyLogo::download(void)
{
    Ui_logoWindow *parent=(Ui_logoWindow *)this->_cookie;
    param.x= MYSPIN(spinX)->value();
    param.y= MYSPIN(spinY)->value();
    param.alpha= MYSPIN(spinAlpha)->value();
    return true;
}

/**
    \fn process
*/
uint8_t    flyLogo::processYuv(ADMImage* in, ADMImage *out)
{
    out->duplicate(in);
    Ui_logoWindow *parent=(Ui_logoWindow *)this->_cookie;
    if(!parent->image)
        return true;
    
    int targetHeight=out->GetHeight(PLANAR_Y);
    int targetWidth =out->GetWidth(PLANAR_Y);
    
    
    if(param.y>targetHeight) 
        return true;
    if(param.x>targetWidth) 
        return true;

    ADMImage *myImage=parent->image;
    if(myImage->GetReadPtr(PLANAR_ALPHA))
    {
        ADM_info("We have alpha\n");
        myImage->copyWithAlphaChannel(out,param.x,param.y);
    }
    else
        myImage->copyToAlpha(out,param.x,param.y,param.alpha);
    return true;
}

/**
      \fn     DIA_getMpDelogo
      \brief  Handle delogo dialog
*/

bool DIA_getLogo(logo *param, ADM_coreVideoFilter *in)
{
    bool ret=false;

    Ui_logoWindow dialog(qtLastRegisteredDialog(), param,in);
    qtRegisterDialog(&dialog);

    if(dialog.exec()==QDialog::Accepted)
    {
        dialog.gather(param); 
        ret=true;
    }

    qtUnregisterDialog(&dialog);
    return ret;
}
//____________________________________
// EOF


