/* 
A* -------------------------------------------------------------------
B* This file contains source code for the PyMOL computer program
C* copyright 1998-2000 by Warren Lyford Delano of DeLano Scientific. 
D* -------------------------------------------------------------------
E* It is unlawful to modify or remove this copyright notice.
F* -------------------------------------------------------------------
G* Please see the accompanying LICENSE file for further information. 
H* -------------------------------------------------------------------
I* Additional authors of this source file include:
-* 
-* 
-*
Z* -------------------------------------------------------------------
*/
#ifndef _H_Editor
#define _H_Editor

#include"Ortho.h"
#include"ButMode.h"
#include"ObjectMolecule.h"

#define cEditorSele1 "_ed1"
#define cEditorSele2 "_ed2"
#define cEditorFragPref "frg"
#define cEditorBasePref "_fbase"

void EditorInit(void);
int EditorActive(void);
void EditorRender(int state);

void EditorFree(void);
void EditorPrepareDrag(ObjectMolecule *obj,int index,int state);
void EditorDrag(ObjectMolecule *obj,int index,int mode,int state,float *pt,float *mov);

void EditorSetActiveObject(ObjectMolecule *obj,int state);
ObjectMolecule *EditorDragObject(void);
void EditorReplace(char *elem,int geom,int valence);

#endif
