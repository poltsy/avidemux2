/*
--- DO NOT EDIT THIS FILE !!! ---

This file has been generated automatically with 'jsapigen'.

jsapigen is a glue-code generator for SpiderMonkey. It is distributed
under the conditions of version 3 of the GNU General Public License.
Please have a look at http://jsapigen.sourceforge.net.

This file is NOT part of jsapigen and is NOT necessarily covered by
jsapigen's license. For licensing information regarding this file,
please refer to the software package which it is part of.

*/

#include "stdio.h"
#include "ADM_jsAvidemux.h"
#include "ADM_scriptTestFactory.h"
#include "ADM_scriptUtils.h"

#ifdef HAVE_ALLOCA_H
#include <alloca.h>
static size_t jj_alloca_limit = 0;
#endif
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#ifdef HAVE_ALLOCA_H
#endif
#include <jsapi.h>
#ifndef JS_THREADSAFE
#if JS_VERSION <= 170
#define jsrefcount int
#define JS_BeginRequest(cx)
#define JS_EndRequest(cx)
#define JS_SuspendRequest(cx)
#define JS_ResumeRequest(cx, saveDepth)
#endif
#endif
#ifndef JS_FS
#define JS_FS(name, call, nargs, flags, extra) {name, call, nargs, flags, extra}
#endif
#ifndef JS_FS_END
#define JS_FS_END {NULL, NULL, 0, 0, 0}
#endif

static JSBool
jjadmTestFacInt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var2;
    int var3;
    int var6;
    jsval var7;
    JSBool var1;
    var2 = NULL;
    var3 = 0;
    var6 = 0;
    var7 = JSVAL_NULL;
    var1 = JS_FALSE;
    var2 = obj;
    var6 = argc;
    var3 = jsTestFacInt();
    if (JS_NewNumberValue(cx, var3, &var7) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var7;
    if (rval) {
        *rval = var7;
    }
    var1 = JS_TRUE;
    do_return:
    return var1;
}
static JSBool
jjadmTestFacFloat(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var9;
    int var10;
    int var13;
    jsval var14;
    JSBool var8;
    var9 = NULL;
    var10 = 0;
    var13 = 0;
    var14 = JSVAL_NULL;
    var8 = JS_FALSE;
    var9 = obj;
    var13 = argc;
    var10 = jsTestFacFloat();
    if (JS_NewNumberValue(cx, var10, &var14) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var14;
    if (rval) {
        *rval = var14;
    }
    var8 = JS_TRUE;
    do_return:
    return var8;
}
static JSBool
jjadmTestFacToggle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var16;
    int var17;
    int var20;
    jsval var21;
    JSBool var15;
    var16 = NULL;
    var17 = 0;
    var20 = 0;
    var21 = JSVAL_NULL;
    var15 = JS_FALSE;
    var16 = obj;
    var20 = argc;
    var17 = jsTestFacToggle();
    if (JS_NewNumberValue(cx, var17, &var21) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var21;
    if (rval) {
        *rval = var21;
    }
    var15 = JS_TRUE;
    do_return:
    return var15;
}
static JSBool
jjadmTestFacMenu(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var23;
    int var24;
    int var27;
    jsval var28;
    JSBool var22;
    var23 = NULL;
    var24 = 0;
    var27 = 0;
    var28 = JSVAL_NULL;
    var22 = JS_FALSE;
    var23 = obj;
    var27 = argc;
    var24 = jsTestFacMenu();
    if (JS_NewNumberValue(cx, var24, &var28) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var28;
    if (rval) {
        *rval = var28;
    }
    var22 = JS_TRUE;
    do_return:
    return var22;
}
static JSBool
jjadmTestFacFile(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var30;
    int var31;
    int var34;
    jsval var35;
    JSBool var29;
    var30 = NULL;
    var31 = 0;
    var34 = 0;
    var35 = JSVAL_NULL;
    var29 = JS_FALSE;
    var30 = obj;
    var34 = argc;
    var31 = jsTestFacFile();
    if (JS_NewNumberValue(cx, var31, &var35) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var35;
    if (rval) {
        *rval = var35;
    }
    var29 = JS_TRUE;
    do_return:
    return var29;
}
static JSBool
jjadmTestFacBitrate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var37;
    int var38;
    int var41;
    jsval var42;
    JSBool var36;
    var37 = NULL;
    var38 = 0;
    var41 = 0;
    var42 = JSVAL_NULL;
    var36 = JS_FALSE;
    var37 = obj;
    var41 = argc;
    var38 = jsTestFacBitrate();
    if (JS_NewNumberValue(cx, var38, &var42) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var42;
    if (rval) {
        *rval = var42;
    }
    var36 = JS_TRUE;
    do_return:
    return var36;
}
static JSBool
jjadmTestFacBar(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var44;
    int var45;
    int var48;
    jsval var49;
    JSBool var43;
    var44 = NULL;
    var45 = 0;
    var48 = 0;
    var49 = JSVAL_NULL;
    var43 = JS_FALSE;
    var44 = obj;
    var48 = argc;
    var45 = jsTestFacBar();
    if (JS_NewNumberValue(cx, var45, &var49) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var49;
    if (rval) {
        *rval = var49;
    }
    var43 = JS_TRUE;
    do_return:
    return var43;
}
static JSBool
jjadmTestFacRoText(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var51;
    int var52;
    int var55;
    jsval var56;
    JSBool var50;
    var51 = NULL;
    var52 = 0;
    var55 = 0;
    var56 = JSVAL_NULL;
    var50 = JS_FALSE;
    var51 = obj;
    var55 = argc;
    var52 = jsTestFacRoText();
    if (JS_NewNumberValue(cx, var52, &var56) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var56;
    if (rval) {
        *rval = var56;
    }
    var50 = JS_TRUE;
    do_return:
    return var50;
}
static JSBool
jjadmTestFacText(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var58;
    int var59;
    int var62;
    jsval var63;
    JSBool var57;
    var58 = NULL;
    var59 = 0;
    var62 = 0;
    var63 = JSVAL_NULL;
    var57 = JS_FALSE;
    var58 = obj;
    var62 = argc;
    var59 = jsTestFacText();
    if (JS_NewNumberValue(cx, var59, &var63) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var63;
    if (rval) {
        *rval = var63;
    }
    var57 = JS_TRUE;
    do_return:
    return var57;
}
static JSBool
jjadmTestFacTab(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var65;
    int var66;
    int var69;
    jsval var70;
    JSBool var64;
    var65 = NULL;
    var66 = 0;
    var69 = 0;
    var70 = JSVAL_NULL;
    var64 = JS_FALSE;
    var65 = obj;
    var69 = argc;
    var66 = jsTestFacTab();
    if (JS_NewNumberValue(cx, var66, &var70) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var70;
    if (rval) {
        *rval = var70;
    }
    var64 = JS_TRUE;
    do_return:
    return var64;
}
static JSBool
jjadmTestFacFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var72;
    int var73;
    int var76;
    jsval var77;
    JSBool var71;
    var72 = NULL;
    var73 = 0;
    var76 = 0;
    var77 = JSVAL_NULL;
    var71 = JS_FALSE;
    var72 = obj;
    var76 = argc;
    var73 = jsTestFacFrame();
    if (JS_NewNumberValue(cx, var73, &var77) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var77;
    if (rval) {
        *rval = var77;
    }
    var71 = JS_TRUE;
    do_return:
    return var71;
}
static JSBool
jjadmTestFacHex(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var79;
    int var80;
    int var83;
    jsval var84;
    JSBool var78;
    var79 = NULL;
    var80 = 0;
    var83 = 0;
    var84 = JSVAL_NULL;
    var78 = JS_FALSE;
    var79 = obj;
    var83 = argc;
    var80 = jsTestFacHex();
    if (JS_NewNumberValue(cx, var80, &var84) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var84;
    if (rval) {
        *rval = var84;
    }
    var78 = JS_TRUE;
    do_return:
    return var78;
}
static JSBool
jjadmTestFacDirSel(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var86;
    int var87;
    int var90;
    jsval var91;
    JSBool var85;
    var86 = NULL;
    var87 = 0;
    var90 = 0;
    var91 = JSVAL_NULL;
    var85 = JS_FALSE;
    var86 = obj;
    var90 = argc;
    var87 = jsTestFacDirSel();
    if (JS_NewNumberValue(cx, var87, &var91) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var91;
    if (rval) {
        *rval = var91;
    }
    var85 = JS_TRUE;
    do_return:
    return var85;
}
static JSBool
jjadmTestFacButton(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var93;
    int var94;
    int var97;
    jsval var98;
    JSBool var92;
    var93 = NULL;
    var94 = 0;
    var97 = 0;
    var98 = JSVAL_NULL;
    var92 = JS_FALSE;
    var93 = obj;
    var97 = argc;
    var94 = jsTestFacButton();
    if (JS_NewNumberValue(cx, var94, &var98) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var98;
    if (rval) {
        *rval = var98;
    }
    var92 = JS_TRUE;
    do_return:
    return var92;
}
static JSBool
jjadmTestFacMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var100;
    int var101;
    int var104;
    jsval var105;
    JSBool var99;
    var100 = NULL;
    var101 = 0;
    var104 = 0;
    var105 = JSVAL_NULL;
    var99 = JS_FALSE;
    var100 = obj;
    var104 = argc;
    var101 = jsTestFacMatrix();
    if (JS_NewNumberValue(cx, var101, &var105) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var105;
    if (rval) {
        *rval = var105;
    }
    var99 = JS_TRUE;
    do_return:
    return var99;
}
static JSBool
jjadmTestFacNotch(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var107;
    int var108;
    int var111;
    jsval var112;
    JSBool var106;
    var107 = NULL;
    var108 = 0;
    var111 = 0;
    var112 = JSVAL_NULL;
    var106 = JS_FALSE;
    var107 = obj;
    var111 = argc;
    var108 = jsTestFacNotch();
    if (JS_NewNumberValue(cx, var108, &var112) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var112;
    if (rval) {
        *rval = var112;
    }
    var106 = JS_TRUE;
    do_return:
    return var106;
}
static JSBool
jjadmTestFacThreadCount(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var114;
    int var115;
    int var118;
    jsval var119;
    JSBool var113;
    var114 = NULL;
    var115 = 0;
    var118 = 0;
    var119 = JSVAL_NULL;
    var113 = JS_FALSE;
    var114 = obj;
    var118 = argc;
    var115 = jsTestFacThreadCount();
    if (JS_NewNumberValue(cx, var115, &var119) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var119;
    if (rval) {
        *rval = var119;
    }
    var113 = JS_TRUE;
    do_return:
    return var113;
}
static JSBool
jjadmTestFacSlider(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var121;
    int var122;
    int var125;
    jsval var126;
    JSBool var120;
    var121 = NULL;
    var122 = 0;
    var125 = 0;
    var126 = JSVAL_NULL;
    var120 = JS_FALSE;
    var121 = obj;
    var125 = argc;
    var122 = jsTestFacSlider();
    if (JS_NewNumberValue(cx, var122, &var126) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var126;
    if (rval) {
        *rval = var126;
    }
    var120 = JS_TRUE;
    do_return:
    return var120;
}
static JSBool
jjadmTestEncoding(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var128;
    int var129;
    int var132;
    jsval var133;
    JSBool var127;
    var128 = NULL;
    var129 = 0;
    var132 = 0;
    var133 = JSVAL_NULL;
    var127 = JS_FALSE;
    var128 = obj;
    var132 = argc;
    var129 = jsTestFacEncoding();
    if (JS_NewNumberValue(cx, var129, &var133) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var133;
    if (rval) {
        *rval = var133;
    }
    var127 = JS_TRUE;
    do_return:
    return var127;
}
static JSBool
jjadmTestCrash(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var135;
    int var139;
    JSBool var134;
    var135 = NULL;
    var139 = 0;
    var134 = JS_FALSE;
    var135 = obj;
    var139 = argc;
    scriptTestCrash();
    var134 = JS_TRUE;
    return var134;
}
static JSBool
jjadmTestAssert(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject * var141;
    int var145;
    JSBool var140;
    var141 = NULL;
    var145 = 0;
    var140 = JS_FALSE;
    var141 = obj;
    var145 = argc;
    scriptTestAssert();
    var140 = JS_TRUE;
    return var140;
}
static JSPropertySpec jj_static_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jj_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jj_static_fs[] = {
    JS_FS("admTestFacInt", jjadmTestFacInt, 0, 0, 1),
    JS_FS("admTestFacFloat", jjadmTestFacFloat, 0, 0, 1),
    JS_FS("admTestFacToggle", jjadmTestFacToggle, 0, 0, 1),
    JS_FS("admTestFacMenu", jjadmTestFacMenu, 0, 0, 1),
    JS_FS("admTestFacFile", jjadmTestFacFile, 0, 0, 1),
    JS_FS("admTestFacBitrate", jjadmTestFacBitrate, 0, 0, 1),
    JS_FS("admTestFacBar", jjadmTestFacBar, 0, 0, 1),
    JS_FS("admTestFacRoText", jjadmTestFacRoText, 0, 0, 1),
    JS_FS("admTestFacText", jjadmTestFacText, 0, 0, 1),
    JS_FS("admTestFacTab", jjadmTestFacTab, 0, 0, 1),
    JS_FS("admTestFacFrame", jjadmTestFacFrame, 0, 0, 1),
    JS_FS("admTestFacHex", jjadmTestFacHex, 0, 0, 1),
    JS_FS("admTestFacDirSel", jjadmTestFacDirSel, 0, 0, 1),
    JS_FS("admTestFacButton", jjadmTestFacButton, 0, 0, 1),
    JS_FS("admTestFacMatrix", jjadmTestFacMatrix, 0, 0, 1),
    JS_FS("admTestFacNotch", jjadmTestFacNotch, 0, 0, 1),
    JS_FS("admTestFacThreadCount", jjadmTestFacThreadCount, 0, 0, 1),
    JS_FS("admTestFacSlider", jjadmTestFacSlider, 0, 0, 1),
    JS_FS("admTestEncoding", jjadmTestEncoding, 0, 0, 1),
    JS_FS("admTestCrash", jjadmTestCrash, 0, 0, 0),
    JS_FS("admTestAssert", jjadmTestAssert, 0, 0, 0),
    JS_FS_END
};
static JSFunctionSpec jj_fs[] = {
    JS_FS("admTestFacInt", jjadmTestFacInt, 0, 0, 1),
    JS_FS("admTestFacFloat", jjadmTestFacFloat, 0, 0, 1),
    JS_FS("admTestFacToggle", jjadmTestFacToggle, 0, 0, 1),
    JS_FS("admTestFacMenu", jjadmTestFacMenu, 0, 0, 1),
    JS_FS("admTestFacFile", jjadmTestFacFile, 0, 0, 1),
    JS_FS("admTestFacBitrate", jjadmTestFacBitrate, 0, 0, 1),
    JS_FS("admTestFacBar", jjadmTestFacBar, 0, 0, 1),
    JS_FS("admTestFacRoText", jjadmTestFacRoText, 0, 0, 1),
    JS_FS("admTestFacText", jjadmTestFacText, 0, 0, 1),
    JS_FS("admTestFacTab", jjadmTestFacTab, 0, 0, 1),
    JS_FS("admTestFacFrame", jjadmTestFacFrame, 0, 0, 1),
    JS_FS("admTestFacHex", jjadmTestFacHex, 0, 0, 1),
    JS_FS("admTestFacDirSel", jjadmTestFacDirSel, 0, 0, 1),
    JS_FS("admTestFacButton", jjadmTestFacButton, 0, 0, 1),
    JS_FS("admTestFacMatrix", jjadmTestFacMatrix, 0, 0, 1),
    JS_FS("admTestFacNotch", jjadmTestFacNotch, 0, 0, 1),
    JS_FS("admTestFacThreadCount", jjadmTestFacThreadCount, 0, 0, 1),
    JS_FS("admTestFacSlider", jjadmTestFacSlider, 0, 0, 1),
    JS_FS("admTestEncoding", jjadmTestEncoding, 0, 0, 1),
    JS_FS("admTestCrash", jjadmTestCrash, 0, 0, 0),
    JS_FS("admTestAssert", jjadmTestAssert, 0, 0, 0),
    JS_FS_END
};

JSFunctionSpec  *jsGetTestFunctions(void)
{
        return jj_fs;
}


