/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jan 2 03:22:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Map;
    QAction *actionOpen_Map;
    QAction *actionImport_Map;
    QAction *actionImport_Prefab;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionSave_Copy_As;
    QAction *actionSave_selecetion_as_Map;
    QAction *actionSave_selection_as_Prefab;
    QAction *actionExport_selection_as;
    QAction *actionSave_Region;
    QAction *actionReload_Models;
    QAction *actionReload_Selected_Models;
    QAction *actionReload_Skins;
    QAction *actionReload_Scripts;
    QAction *actionReload_GUIs;
    QAction *actionReload_Shaders;
    QAction *actionReload_Defs;
    QAction *actionReload_Particles;
    QAction *actionSelect_Game;
    QAction *actionPoint_File;
    QAction *actionExit;
    QAction *actionReload_selected_Models;
    QAction *actionReload_all_Models;
    QAction *actionReload_Skins_2;
    QAction *actionReload_Scripts_2;
    QAction *actionReload_Readable_GUIs;
    QAction *actionReload_Shaders_2;
    QAction *actionReload_Defs_2;
    QAction *actionReload_Particles_2;
    QAction *actionRecent;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionPaste_to_Camera;
    QAction *actionDuplicate;
    QAction *actionDelete;
    QAction *actionReparent_Primitives;
    QAction *actionReparent_Primitives_to_Worldspawn;
    QAction *actionMerge_selected_Entities;
    QAction *actionCopy_Shader;
    QAction *actionPaste_Shader;
    QAction *actionClear_selection;
    QAction *actionInvert_selection;
    QAction *actionSelect_complete_tall;
    QAction *actionSelect_inside;
    QAction *actionSelect_touching;
    QAction *actionSelect_children;
    QAction *actionExpand_selection_to_all_Siblings;
    QAction *actionKeyboard_Shortcuts;
    QAction *actionPreferences;
    QAction *actionCopy_Shader_2;
    QAction *actionPaste_shader;
    QAction *actionPaste_Shader_natural;
    QAction *actionNew_XY_view;
    QAction *actionLayers;
    QAction *actionConsole;
    QAction *actionAsset_Browser;
    QAction *actionEntity_Inspector;
    QAction *actionLight_Inspector;
    QAction *actionSurface_Inspector;
    QAction *actionPatch_Inspector;
    QAction *actionTexture_Tool;
    QAction *actionScene_Browser;
    QAction *actionColours;
    QAction *actionBackground_Image;
    QAction *actionFloating;
    QAction *actionSplit_Pane_4_Up;
    QAction *actionDefault;
    QAction *actionSave_Custom;
    QAction *actionLoad_Custom;
    QAction *actionMaximized;
    QAction *actionTop_Left;
    QAction *actionTop_Right;
    QAction *actionBottom_Left;
    QAction *actionBottom_Right;
    QAction *actionCenter;
    QAction *actionUp_Floor;
    QAction *actionDown_Floor;
    QAction *actionNext_Leak;
    QAction *actionPrevious_Leak;
    QAction *actionNext_XY_XZ_YZ;
    QAction *actionXY_Top;
    QAction *actionYZ;
    QAction *actionXz;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *action100_Home;
    QAction *action100_Local;
    QAction *actionZoom_Selected;
    QAction *actionShow_Angles;
    QAction *actionShow_Names;
    QAction *actionShow_Blocks;
    QAction *actionShow_Coordinates;
    QAction *actionShow_Window_Outline;
    QAction *actionShow_Axes;
    QAction *actionShow_Workzone;
    QAction *actionShow_Size_Info;
    QAction *actionHide_Selected;
    QAction *actionHide_Deselected;
    QAction *actionShow_Hidden;
    QAction *actionSwitch_off;
    QAction *actionSt_from_XY_view;
    QAction *actionSet_from_Brush;
    QAction *actionSet_from_Selection;
    QAction *actionFree_Model_Rotation;
    QAction *actionRotate_and_scale;
    QAction *actionEdges;
    QAction *actionVertices;
    QAction *actionFaces;
    QAction *actionEntities;
    QAction *actionNudge_Left;
    QAction *actionNudge_Right;
    QAction *actionNudge_Up;
    QAction *actionNudge_Down;
    QAction *actionRotate_X;
    QAction *actionRotate_Y;
    QAction *actionRotate_Z;
    QAction *actionMirror_X;
    QAction *actionMirror_Y;
    QAction *actionMirror_Z;
    QAction *actionSnap_selected_to_grid;
    QAction *actionGrid_0_125;
    QAction *actionGrid_0_25;
    QAction *actionGrid_0_5;
    QAction *actionGrid_1;
    QAction *actionGrid_2;
    QAction *actionGrid_4;
    QAction *actionGrid_8;
    QAction *actionGrid_9;
    QAction *actionGrid_16;
    QAction *actionGrid_32;
    QAction *actionGrid_64;
    QAction *actionGrid_128;
    QAction *actionGrid_256;
    QAction *actionAll_Entities;
    QAction *actionBrushes;
    QAction *actionCaulk;
    QAction *actionClip_Textures;
    QAction *actionCollision_Surfaces;
    QAction *actionDecals;
    QAction *actionLights;
    QAction *actionNodraw_Textures;
    QAction *actionPatches;
    QAction *actionPaths;
    QAction *actionShadow_Textures;
    QAction *actionTrigger_Textures;
    QAction *actionVisportals;
    QAction *actionWeather_Textures;
    QAction *actionWorld_Geometry;
    QAction *actionActivate_all_Filters;
    QAction *actionDeactivate_all_filters;
    QAction *actionEdit_Filters;
    QAction *actionBuild_All;
    QAction *actionFind_Brush;
    QAction *actionMap_Info;
    QAction *actionConversations;
    QAction *actionFixup_Map;
    QAction *actionDifficulty;
    QAction *actionObjectives;
    QAction *actionRevert_group_to_worldspawn;
    QAction *actionConnect_selected_entities;
    QAction *actionBind_selected_entities;
    QAction *actionEntity_Class_Tree;
    QAction *actionPrism;
    QAction *actionCone;
    QAction *actionSphere;
    QAction *actionTexture_Lock;
    QAction *actionCreate_Decal_Patches;
    QAction *actionMake_Visportal;
    QAction *actionMake_Hollow;
    QAction *actionMake_Room;
    QAction *actionCSG_Subtract;
    QAction *actionCSG_Merge;
    QAction *actionCSG_Add;
    QAction *actionClip_Selection;
    QAction *actionSplit_Selection;
    QAction *actionFlip_Clip_Orientation;
    QAction *actionTrigger_Volume;
    QAction *actionWater_Volume;
    QAction *actionForce_Volume;
    QAction *actionPain_Volume;
    QAction *actionBlock_All_Volume;
    QAction *actionBlock_AI_Volme;
    QAction *actionBlock_Projeciles_Volume;
    QAction *actionCinematic_Volume;
    QAction *actionSFX_Volume;
    QAction *actionPost_Process_Volume;
    QAction *actionPhysics_Volume;
    QAction *actionCreate_simple_patch_mesh;
    QAction *actionCreate_End_cap;
    QAction *actionCreate_Bevel;
    QAction *actionCreate_Cone;
    QAction *actionCreate_Cylinder;
    QAction *actionCreate_Sphere;
    QAction *actionMore_Cylinders;
    QAction *actionThicken_Selected_Patches;
    QAction *actionCap_Selection;
    QAction *actionCycle_Cap_Texture;
    QAction *actionStitch_Patch_Texture;
    QAction *actionBulge_Patch;
    QAction *actionCreate_Dense_Cylinder;
    QAction *actionCreate_Very_Dense_Cylinder;
    QAction *actionCreate_Square_Cylinder;
    QAction *actionInser_2_Columns_at_the_beginning;
    QAction *actionInsert_2_Columns_at_the_end;
    QAction *actionInsert_2_Rows_at_the_beginning;
    QAction *actionInsert_2_Rows_at_the_end;
    QAction *actionDelete_2_Columns_from_the_beginning;
    QAction *actionDelete_2_Columns_from_the_end;
    QAction *actionDelete_2_Rows_from_the_beginning;
    QAction *actionDelete_2_Rows_from_the_end;
    QAction *actionInvert;
    QAction *actionRe_disperse;
    QAction *actionTranspose;
    QAction *actionCreat_NURBS_Curve;
    QAction *actionCreate_CatmullRom_Curve;
    QAction *actionConvert_NURBS_to_CatmullRom;
    QAction *actionApend_Curve_Control_Point;
    QAction *actionInsert_Curve_Control_Points;
    QAction *actionRemove_Curve_Controle_Points;
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuReload_2;
    QMenu *menuEdit;
    QMenu *menuSelection;
    QMenu *menuView;
    QMenu *menuLayout;
    QMenu *menuCamera_Position;
    QMenu *menuCamera;
    QMenu *menuOrthographic;
    QMenu *menuHide_Show;
    QMenu *menuShow;
    QMenu *menuRegion;
    QMenu *menuModify;
    QMenu *menuComponents;
    QMenu *menuNudge;
    QMenu *menuRotate;
    QMenu *menuMirror;
    QMenu *menuGrid;
    QMenu *menuFilter;
    QMenu *menuMap;
    QMenu *menuEntity;
    QMenu *menuBrush;
    QMenu *menuCSG;
    QMenu *menuClipper;
    QMenu *menuVolume;
    QMenu *menuPatch;
    QMenu *menuInsert;
    QMenu *menuAppend;
    QMenu *menuDelete;
    QMenu *menuMatrix;
    QMenu *menuCurve;
    QMenu *menuScripts;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QDockWidget *dock_widget2;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *medtab;
    QWidget *mattab;
    QWidget *proptab;
    QWidget *enttab;
    QWidget *sndtab;
    QDockWidget *dock_widget3;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_3;
    QFrame *frame_4;
    QDockWidget *dock_widget1;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QToolBox *toolBox;
    QWidget *transpage;
    QWidget *selectpage;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 444);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow::separator {\n"
"     background: rgb(42, 40, 40);\n"
"     width: 3px; /* when vertical */\n"
"     height: 3px; /* when horizontal */\n"
" }\n"
"\n"
" QMainWindow::separator:hover {\n"
"     background:rgb(131, 16, 197);\n"
" }\n"
"\n"
"QMainWindow {\n"
"\n"
" }\n"
"\n"
"QToolBar {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(65, 65, 65, 255), stop:1 rgba(48, 48, 48, 255));\n"
"	 border: 1px inset;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-top-color: rgb(113, 113, 113);\n"
"	border-right-color: rgb(89, 89, 89);\n"
"	border-bottom-color: rgb(35, 34, 34);\n"
"	border-left-color: rgb(62, 62, 62);\n"
" }\n"
"\n"
"QToolBar::handle {\n"
"	background-image: url(:/Res/Images/ToolBar/Toolbar-Handle.png);\n"
"}\n"
"\n"
""));
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionNew_Map = new QAction(MainWindow);
        actionNew_Map->setObjectName(QString::fromUtf8("actionNew_Map"));
        actionOpen_Map = new QAction(MainWindow);
        actionOpen_Map->setObjectName(QString::fromUtf8("actionOpen_Map"));
        actionImport_Map = new QAction(MainWindow);
        actionImport_Map->setObjectName(QString::fromUtf8("actionImport_Map"));
        actionImport_Prefab = new QAction(MainWindow);
        actionImport_Prefab->setObjectName(QString::fromUtf8("actionImport_Prefab"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave_Copy_As = new QAction(MainWindow);
        actionSave_Copy_As->setObjectName(QString::fromUtf8("actionSave_Copy_As"));
        actionSave_selecetion_as_Map = new QAction(MainWindow);
        actionSave_selecetion_as_Map->setObjectName(QString::fromUtf8("actionSave_selecetion_as_Map"));
        actionSave_selection_as_Prefab = new QAction(MainWindow);
        actionSave_selection_as_Prefab->setObjectName(QString::fromUtf8("actionSave_selection_as_Prefab"));
        actionExport_selection_as = new QAction(MainWindow);
        actionExport_selection_as->setObjectName(QString::fromUtf8("actionExport_selection_as"));
        actionSave_Region = new QAction(MainWindow);
        actionSave_Region->setObjectName(QString::fromUtf8("actionSave_Region"));
        actionReload_Models = new QAction(MainWindow);
        actionReload_Models->setObjectName(QString::fromUtf8("actionReload_Models"));
        actionReload_Selected_Models = new QAction(MainWindow);
        actionReload_Selected_Models->setObjectName(QString::fromUtf8("actionReload_Selected_Models"));
        actionReload_Skins = new QAction(MainWindow);
        actionReload_Skins->setObjectName(QString::fromUtf8("actionReload_Skins"));
        actionReload_Scripts = new QAction(MainWindow);
        actionReload_Scripts->setObjectName(QString::fromUtf8("actionReload_Scripts"));
        actionReload_GUIs = new QAction(MainWindow);
        actionReload_GUIs->setObjectName(QString::fromUtf8("actionReload_GUIs"));
        actionReload_Shaders = new QAction(MainWindow);
        actionReload_Shaders->setObjectName(QString::fromUtf8("actionReload_Shaders"));
        actionReload_Defs = new QAction(MainWindow);
        actionReload_Defs->setObjectName(QString::fromUtf8("actionReload_Defs"));
        actionReload_Particles = new QAction(MainWindow);
        actionReload_Particles->setObjectName(QString::fromUtf8("actionReload_Particles"));
        actionSelect_Game = new QAction(MainWindow);
        actionSelect_Game->setObjectName(QString::fromUtf8("actionSelect_Game"));
        actionPoint_File = new QAction(MainWindow);
        actionPoint_File->setObjectName(QString::fromUtf8("actionPoint_File"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionReload_selected_Models = new QAction(MainWindow);
        actionReload_selected_Models->setObjectName(QString::fromUtf8("actionReload_selected_Models"));
        actionReload_all_Models = new QAction(MainWindow);
        actionReload_all_Models->setObjectName(QString::fromUtf8("actionReload_all_Models"));
        actionReload_Skins_2 = new QAction(MainWindow);
        actionReload_Skins_2->setObjectName(QString::fromUtf8("actionReload_Skins_2"));
        actionReload_Scripts_2 = new QAction(MainWindow);
        actionReload_Scripts_2->setObjectName(QString::fromUtf8("actionReload_Scripts_2"));
        actionReload_Readable_GUIs = new QAction(MainWindow);
        actionReload_Readable_GUIs->setObjectName(QString::fromUtf8("actionReload_Readable_GUIs"));
        actionReload_Shaders_2 = new QAction(MainWindow);
        actionReload_Shaders_2->setObjectName(QString::fromUtf8("actionReload_Shaders_2"));
        actionReload_Defs_2 = new QAction(MainWindow);
        actionReload_Defs_2->setObjectName(QString::fromUtf8("actionReload_Defs_2"));
        actionReload_Particles_2 = new QAction(MainWindow);
        actionReload_Particles_2->setObjectName(QString::fromUtf8("actionReload_Particles_2"));
        actionRecent = new QAction(MainWindow);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste_to_Camera = new QAction(MainWindow);
        actionPaste_to_Camera->setObjectName(QString::fromUtf8("actionPaste_to_Camera"));
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionReparent_Primitives = new QAction(MainWindow);
        actionReparent_Primitives->setObjectName(QString::fromUtf8("actionReparent_Primitives"));
        actionReparent_Primitives_to_Worldspawn = new QAction(MainWindow);
        actionReparent_Primitives_to_Worldspawn->setObjectName(QString::fromUtf8("actionReparent_Primitives_to_Worldspawn"));
        actionMerge_selected_Entities = new QAction(MainWindow);
        actionMerge_selected_Entities->setObjectName(QString::fromUtf8("actionMerge_selected_Entities"));
        actionCopy_Shader = new QAction(MainWindow);
        actionCopy_Shader->setObjectName(QString::fromUtf8("actionCopy_Shader"));
        actionPaste_Shader = new QAction(MainWindow);
        actionPaste_Shader->setObjectName(QString::fromUtf8("actionPaste_Shader"));
        actionClear_selection = new QAction(MainWindow);
        actionClear_selection->setObjectName(QString::fromUtf8("actionClear_selection"));
        actionInvert_selection = new QAction(MainWindow);
        actionInvert_selection->setObjectName(QString::fromUtf8("actionInvert_selection"));
        actionSelect_complete_tall = new QAction(MainWindow);
        actionSelect_complete_tall->setObjectName(QString::fromUtf8("actionSelect_complete_tall"));
        actionSelect_inside = new QAction(MainWindow);
        actionSelect_inside->setObjectName(QString::fromUtf8("actionSelect_inside"));
        actionSelect_touching = new QAction(MainWindow);
        actionSelect_touching->setObjectName(QString::fromUtf8("actionSelect_touching"));
        actionSelect_children = new QAction(MainWindow);
        actionSelect_children->setObjectName(QString::fromUtf8("actionSelect_children"));
        actionExpand_selection_to_all_Siblings = new QAction(MainWindow);
        actionExpand_selection_to_all_Siblings->setObjectName(QString::fromUtf8("actionExpand_selection_to_all_Siblings"));
        actionKeyboard_Shortcuts = new QAction(MainWindow);
        actionKeyboard_Shortcuts->setObjectName(QString::fromUtf8("actionKeyboard_Shortcuts"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionCopy_Shader_2 = new QAction(MainWindow);
        actionCopy_Shader_2->setObjectName(QString::fromUtf8("actionCopy_Shader_2"));
        actionPaste_shader = new QAction(MainWindow);
        actionPaste_shader->setObjectName(QString::fromUtf8("actionPaste_shader"));
        actionPaste_Shader_natural = new QAction(MainWindow);
        actionPaste_Shader_natural->setObjectName(QString::fromUtf8("actionPaste_Shader_natural"));
        actionNew_XY_view = new QAction(MainWindow);
        actionNew_XY_view->setObjectName(QString::fromUtf8("actionNew_XY_view"));
        actionLayers = new QAction(MainWindow);
        actionLayers->setObjectName(QString::fromUtf8("actionLayers"));
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionAsset_Browser = new QAction(MainWindow);
        actionAsset_Browser->setObjectName(QString::fromUtf8("actionAsset_Browser"));
        actionEntity_Inspector = new QAction(MainWindow);
        actionEntity_Inspector->setObjectName(QString::fromUtf8("actionEntity_Inspector"));
        actionLight_Inspector = new QAction(MainWindow);
        actionLight_Inspector->setObjectName(QString::fromUtf8("actionLight_Inspector"));
        actionSurface_Inspector = new QAction(MainWindow);
        actionSurface_Inspector->setObjectName(QString::fromUtf8("actionSurface_Inspector"));
        actionPatch_Inspector = new QAction(MainWindow);
        actionPatch_Inspector->setObjectName(QString::fromUtf8("actionPatch_Inspector"));
        actionPatch_Inspector->setCheckable(true);
        actionTexture_Tool = new QAction(MainWindow);
        actionTexture_Tool->setObjectName(QString::fromUtf8("actionTexture_Tool"));
        actionTexture_Tool->setCheckable(true);
        actionScene_Browser = new QAction(MainWindow);
        actionScene_Browser->setObjectName(QString::fromUtf8("actionScene_Browser"));
        actionScene_Browser->setCheckable(true);
        actionColours = new QAction(MainWindow);
        actionColours->setObjectName(QString::fromUtf8("actionColours"));
        actionBackground_Image = new QAction(MainWindow);
        actionBackground_Image->setObjectName(QString::fromUtf8("actionBackground_Image"));
        actionFloating = new QAction(MainWindow);
        actionFloating->setObjectName(QString::fromUtf8("actionFloating"));
        actionFloating->setCheckable(true);
        actionSplit_Pane_4_Up = new QAction(MainWindow);
        actionSplit_Pane_4_Up->setObjectName(QString::fromUtf8("actionSplit_Pane_4_Up"));
        actionSplit_Pane_4_Up->setCheckable(true);
        actionDefault = new QAction(MainWindow);
        actionDefault->setObjectName(QString::fromUtf8("actionDefault"));
        actionDefault->setCheckable(true);
        actionSave_Custom = new QAction(MainWindow);
        actionSave_Custom->setObjectName(QString::fromUtf8("actionSave_Custom"));
        actionLoad_Custom = new QAction(MainWindow);
        actionLoad_Custom->setObjectName(QString::fromUtf8("actionLoad_Custom"));
        actionMaximized = new QAction(MainWindow);
        actionMaximized->setObjectName(QString::fromUtf8("actionMaximized"));
        actionMaximized->setCheckable(true);
        actionTop_Left = new QAction(MainWindow);
        actionTop_Left->setObjectName(QString::fromUtf8("actionTop_Left"));
        actionTop_Right = new QAction(MainWindow);
        actionTop_Right->setObjectName(QString::fromUtf8("actionTop_Right"));
        actionBottom_Left = new QAction(MainWindow);
        actionBottom_Left->setObjectName(QString::fromUtf8("actionBottom_Left"));
        actionBottom_Right = new QAction(MainWindow);
        actionBottom_Right->setObjectName(QString::fromUtf8("actionBottom_Right"));
        actionCenter = new QAction(MainWindow);
        actionCenter->setObjectName(QString::fromUtf8("actionCenter"));
        actionUp_Floor = new QAction(MainWindow);
        actionUp_Floor->setObjectName(QString::fromUtf8("actionUp_Floor"));
        actionDown_Floor = new QAction(MainWindow);
        actionDown_Floor->setObjectName(QString::fromUtf8("actionDown_Floor"));
        actionNext_Leak = new QAction(MainWindow);
        actionNext_Leak->setObjectName(QString::fromUtf8("actionNext_Leak"));
        actionPrevious_Leak = new QAction(MainWindow);
        actionPrevious_Leak->setObjectName(QString::fromUtf8("actionPrevious_Leak"));
        actionNext_XY_XZ_YZ = new QAction(MainWindow);
        actionNext_XY_XZ_YZ->setObjectName(QString::fromUtf8("actionNext_XY_XZ_YZ"));
        actionXY_Top = new QAction(MainWindow);
        actionXY_Top->setObjectName(QString::fromUtf8("actionXY_Top"));
        actionYZ = new QAction(MainWindow);
        actionYZ->setObjectName(QString::fromUtf8("actionYZ"));
        actionXz = new QAction(MainWindow);
        actionXz->setObjectName(QString::fromUtf8("actionXz"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        action100_Home = new QAction(MainWindow);
        action100_Home->setObjectName(QString::fromUtf8("action100_Home"));
        action100_Local = new QAction(MainWindow);
        action100_Local->setObjectName(QString::fromUtf8("action100_Local"));
        actionZoom_Selected = new QAction(MainWindow);
        actionZoom_Selected->setObjectName(QString::fromUtf8("actionZoom_Selected"));
        actionShow_Angles = new QAction(MainWindow);
        actionShow_Angles->setObjectName(QString::fromUtf8("actionShow_Angles"));
        actionShow_Names = new QAction(MainWindow);
        actionShow_Names->setObjectName(QString::fromUtf8("actionShow_Names"));
        actionShow_Blocks = new QAction(MainWindow);
        actionShow_Blocks->setObjectName(QString::fromUtf8("actionShow_Blocks"));
        actionShow_Coordinates = new QAction(MainWindow);
        actionShow_Coordinates->setObjectName(QString::fromUtf8("actionShow_Coordinates"));
        actionShow_Window_Outline = new QAction(MainWindow);
        actionShow_Window_Outline->setObjectName(QString::fromUtf8("actionShow_Window_Outline"));
        actionShow_Axes = new QAction(MainWindow);
        actionShow_Axes->setObjectName(QString::fromUtf8("actionShow_Axes"));
        actionShow_Workzone = new QAction(MainWindow);
        actionShow_Workzone->setObjectName(QString::fromUtf8("actionShow_Workzone"));
        actionShow_Size_Info = new QAction(MainWindow);
        actionShow_Size_Info->setObjectName(QString::fromUtf8("actionShow_Size_Info"));
        actionHide_Selected = new QAction(MainWindow);
        actionHide_Selected->setObjectName(QString::fromUtf8("actionHide_Selected"));
        actionHide_Deselected = new QAction(MainWindow);
        actionHide_Deselected->setObjectName(QString::fromUtf8("actionHide_Deselected"));
        actionShow_Hidden = new QAction(MainWindow);
        actionShow_Hidden->setObjectName(QString::fromUtf8("actionShow_Hidden"));
        actionSwitch_off = new QAction(MainWindow);
        actionSwitch_off->setObjectName(QString::fromUtf8("actionSwitch_off"));
        actionSt_from_XY_view = new QAction(MainWindow);
        actionSt_from_XY_view->setObjectName(QString::fromUtf8("actionSt_from_XY_view"));
        actionSet_from_Brush = new QAction(MainWindow);
        actionSet_from_Brush->setObjectName(QString::fromUtf8("actionSet_from_Brush"));
        actionSet_from_Selection = new QAction(MainWindow);
        actionSet_from_Selection->setObjectName(QString::fromUtf8("actionSet_from_Selection"));
        actionFree_Model_Rotation = new QAction(MainWindow);
        actionFree_Model_Rotation->setObjectName(QString::fromUtf8("actionFree_Model_Rotation"));
        actionRotate_and_scale = new QAction(MainWindow);
        actionRotate_and_scale->setObjectName(QString::fromUtf8("actionRotate_and_scale"));
        actionEdges = new QAction(MainWindow);
        actionEdges->setObjectName(QString::fromUtf8("actionEdges"));
        actionEdges->setCheckable(true);
        actionVertices = new QAction(MainWindow);
        actionVertices->setObjectName(QString::fromUtf8("actionVertices"));
        actionVertices->setCheckable(true);
        actionFaces = new QAction(MainWindow);
        actionFaces->setObjectName(QString::fromUtf8("actionFaces"));
        actionFaces->setCheckable(true);
        actionEntities = new QAction(MainWindow);
        actionEntities->setObjectName(QString::fromUtf8("actionEntities"));
        actionEntities->setCheckable(true);
        actionNudge_Left = new QAction(MainWindow);
        actionNudge_Left->setObjectName(QString::fromUtf8("actionNudge_Left"));
        actionNudge_Right = new QAction(MainWindow);
        actionNudge_Right->setObjectName(QString::fromUtf8("actionNudge_Right"));
        actionNudge_Up = new QAction(MainWindow);
        actionNudge_Up->setObjectName(QString::fromUtf8("actionNudge_Up"));
        actionNudge_Down = new QAction(MainWindow);
        actionNudge_Down->setObjectName(QString::fromUtf8("actionNudge_Down"));
        actionRotate_X = new QAction(MainWindow);
        actionRotate_X->setObjectName(QString::fromUtf8("actionRotate_X"));
        actionRotate_Y = new QAction(MainWindow);
        actionRotate_Y->setObjectName(QString::fromUtf8("actionRotate_Y"));
        actionRotate_Z = new QAction(MainWindow);
        actionRotate_Z->setObjectName(QString::fromUtf8("actionRotate_Z"));
        actionMirror_X = new QAction(MainWindow);
        actionMirror_X->setObjectName(QString::fromUtf8("actionMirror_X"));
        actionMirror_Y = new QAction(MainWindow);
        actionMirror_Y->setObjectName(QString::fromUtf8("actionMirror_Y"));
        actionMirror_Z = new QAction(MainWindow);
        actionMirror_Z->setObjectName(QString::fromUtf8("actionMirror_Z"));
        actionSnap_selected_to_grid = new QAction(MainWindow);
        actionSnap_selected_to_grid->setObjectName(QString::fromUtf8("actionSnap_selected_to_grid"));
        actionSnap_selected_to_grid->setCheckable(false);
        actionGrid_0_125 = new QAction(MainWindow);
        actionGrid_0_125->setObjectName(QString::fromUtf8("actionGrid_0_125"));
        actionGrid_0_25 = new QAction(MainWindow);
        actionGrid_0_25->setObjectName(QString::fromUtf8("actionGrid_0_25"));
        actionGrid_0_25->setCheckable(true);
        actionGrid_0_5 = new QAction(MainWindow);
        actionGrid_0_5->setObjectName(QString::fromUtf8("actionGrid_0_5"));
        actionGrid_0_5->setCheckable(true);
        actionGrid_1 = new QAction(MainWindow);
        actionGrid_1->setObjectName(QString::fromUtf8("actionGrid_1"));
        actionGrid_1->setCheckable(true);
        actionGrid_2 = new QAction(MainWindow);
        actionGrid_2->setObjectName(QString::fromUtf8("actionGrid_2"));
        actionGrid_2->setCheckable(true);
        actionGrid_4 = new QAction(MainWindow);
        actionGrid_4->setObjectName(QString::fromUtf8("actionGrid_4"));
        actionGrid_4->setCheckable(true);
        actionGrid_8 = new QAction(MainWindow);
        actionGrid_8->setObjectName(QString::fromUtf8("actionGrid_8"));
        actionGrid_8->setCheckable(true);
        actionGrid_9 = new QAction(MainWindow);
        actionGrid_9->setObjectName(QString::fromUtf8("actionGrid_9"));
        actionGrid_9->setCheckable(true);
        actionGrid_16 = new QAction(MainWindow);
        actionGrid_16->setObjectName(QString::fromUtf8("actionGrid_16"));
        actionGrid_16->setCheckable(true);
        actionGrid_32 = new QAction(MainWindow);
        actionGrid_32->setObjectName(QString::fromUtf8("actionGrid_32"));
        actionGrid_32->setCheckable(true);
        actionGrid_64 = new QAction(MainWindow);
        actionGrid_64->setObjectName(QString::fromUtf8("actionGrid_64"));
        actionGrid_64->setCheckable(true);
        actionGrid_128 = new QAction(MainWindow);
        actionGrid_128->setObjectName(QString::fromUtf8("actionGrid_128"));
        actionGrid_128->setCheckable(true);
        actionGrid_256 = new QAction(MainWindow);
        actionGrid_256->setObjectName(QString::fromUtf8("actionGrid_256"));
        actionGrid_256->setCheckable(true);
        actionAll_Entities = new QAction(MainWindow);
        actionAll_Entities->setObjectName(QString::fromUtf8("actionAll_Entities"));
        actionBrushes = new QAction(MainWindow);
        actionBrushes->setObjectName(QString::fromUtf8("actionBrushes"));
        actionCaulk = new QAction(MainWindow);
        actionCaulk->setObjectName(QString::fromUtf8("actionCaulk"));
        actionClip_Textures = new QAction(MainWindow);
        actionClip_Textures->setObjectName(QString::fromUtf8("actionClip_Textures"));
        actionCollision_Surfaces = new QAction(MainWindow);
        actionCollision_Surfaces->setObjectName(QString::fromUtf8("actionCollision_Surfaces"));
        actionDecals = new QAction(MainWindow);
        actionDecals->setObjectName(QString::fromUtf8("actionDecals"));
        actionLights = new QAction(MainWindow);
        actionLights->setObjectName(QString::fromUtf8("actionLights"));
        actionNodraw_Textures = new QAction(MainWindow);
        actionNodraw_Textures->setObjectName(QString::fromUtf8("actionNodraw_Textures"));
        actionPatches = new QAction(MainWindow);
        actionPatches->setObjectName(QString::fromUtf8("actionPatches"));
        actionPaths = new QAction(MainWindow);
        actionPaths->setObjectName(QString::fromUtf8("actionPaths"));
        actionShadow_Textures = new QAction(MainWindow);
        actionShadow_Textures->setObjectName(QString::fromUtf8("actionShadow_Textures"));
        actionTrigger_Textures = new QAction(MainWindow);
        actionTrigger_Textures->setObjectName(QString::fromUtf8("actionTrigger_Textures"));
        actionVisportals = new QAction(MainWindow);
        actionVisportals->setObjectName(QString::fromUtf8("actionVisportals"));
        actionWeather_Textures = new QAction(MainWindow);
        actionWeather_Textures->setObjectName(QString::fromUtf8("actionWeather_Textures"));
        actionWorld_Geometry = new QAction(MainWindow);
        actionWorld_Geometry->setObjectName(QString::fromUtf8("actionWorld_Geometry"));
        actionActivate_all_Filters = new QAction(MainWindow);
        actionActivate_all_Filters->setObjectName(QString::fromUtf8("actionActivate_all_Filters"));
        actionDeactivate_all_filters = new QAction(MainWindow);
        actionDeactivate_all_filters->setObjectName(QString::fromUtf8("actionDeactivate_all_filters"));
        actionEdit_Filters = new QAction(MainWindow);
        actionEdit_Filters->setObjectName(QString::fromUtf8("actionEdit_Filters"));
        actionBuild_All = new QAction(MainWindow);
        actionBuild_All->setObjectName(QString::fromUtf8("actionBuild_All"));
        actionFind_Brush = new QAction(MainWindow);
        actionFind_Brush->setObjectName(QString::fromUtf8("actionFind_Brush"));
        actionMap_Info = new QAction(MainWindow);
        actionMap_Info->setObjectName(QString::fromUtf8("actionMap_Info"));
        actionConversations = new QAction(MainWindow);
        actionConversations->setObjectName(QString::fromUtf8("actionConversations"));
        actionFixup_Map = new QAction(MainWindow);
        actionFixup_Map->setObjectName(QString::fromUtf8("actionFixup_Map"));
        actionDifficulty = new QAction(MainWindow);
        actionDifficulty->setObjectName(QString::fromUtf8("actionDifficulty"));
        actionObjectives = new QAction(MainWindow);
        actionObjectives->setObjectName(QString::fromUtf8("actionObjectives"));
        actionRevert_group_to_worldspawn = new QAction(MainWindow);
        actionRevert_group_to_worldspawn->setObjectName(QString::fromUtf8("actionRevert_group_to_worldspawn"));
        actionConnect_selected_entities = new QAction(MainWindow);
        actionConnect_selected_entities->setObjectName(QString::fromUtf8("actionConnect_selected_entities"));
        actionBind_selected_entities = new QAction(MainWindow);
        actionBind_selected_entities->setObjectName(QString::fromUtf8("actionBind_selected_entities"));
        actionEntity_Class_Tree = new QAction(MainWindow);
        actionEntity_Class_Tree->setObjectName(QString::fromUtf8("actionEntity_Class_Tree"));
        actionPrism = new QAction(MainWindow);
        actionPrism->setObjectName(QString::fromUtf8("actionPrism"));
        actionCone = new QAction(MainWindow);
        actionCone->setObjectName(QString::fromUtf8("actionCone"));
        actionSphere = new QAction(MainWindow);
        actionSphere->setObjectName(QString::fromUtf8("actionSphere"));
        actionTexture_Lock = new QAction(MainWindow);
        actionTexture_Lock->setObjectName(QString::fromUtf8("actionTexture_Lock"));
        actionCreate_Decal_Patches = new QAction(MainWindow);
        actionCreate_Decal_Patches->setObjectName(QString::fromUtf8("actionCreate_Decal_Patches"));
        actionMake_Visportal = new QAction(MainWindow);
        actionMake_Visportal->setObjectName(QString::fromUtf8("actionMake_Visportal"));
        actionMake_Hollow = new QAction(MainWindow);
        actionMake_Hollow->setObjectName(QString::fromUtf8("actionMake_Hollow"));
        actionMake_Room = new QAction(MainWindow);
        actionMake_Room->setObjectName(QString::fromUtf8("actionMake_Room"));
        actionCSG_Subtract = new QAction(MainWindow);
        actionCSG_Subtract->setObjectName(QString::fromUtf8("actionCSG_Subtract"));
        actionCSG_Merge = new QAction(MainWindow);
        actionCSG_Merge->setObjectName(QString::fromUtf8("actionCSG_Merge"));
        actionCSG_Add = new QAction(MainWindow);
        actionCSG_Add->setObjectName(QString::fromUtf8("actionCSG_Add"));
        actionClip_Selection = new QAction(MainWindow);
        actionClip_Selection->setObjectName(QString::fromUtf8("actionClip_Selection"));
        actionSplit_Selection = new QAction(MainWindow);
        actionSplit_Selection->setObjectName(QString::fromUtf8("actionSplit_Selection"));
        actionFlip_Clip_Orientation = new QAction(MainWindow);
        actionFlip_Clip_Orientation->setObjectName(QString::fromUtf8("actionFlip_Clip_Orientation"));
        actionTrigger_Volume = new QAction(MainWindow);
        actionTrigger_Volume->setObjectName(QString::fromUtf8("actionTrigger_Volume"));
        actionWater_Volume = new QAction(MainWindow);
        actionWater_Volume->setObjectName(QString::fromUtf8("actionWater_Volume"));
        actionForce_Volume = new QAction(MainWindow);
        actionForce_Volume->setObjectName(QString::fromUtf8("actionForce_Volume"));
        actionPain_Volume = new QAction(MainWindow);
        actionPain_Volume->setObjectName(QString::fromUtf8("actionPain_Volume"));
        actionBlock_All_Volume = new QAction(MainWindow);
        actionBlock_All_Volume->setObjectName(QString::fromUtf8("actionBlock_All_Volume"));
        actionBlock_AI_Volme = new QAction(MainWindow);
        actionBlock_AI_Volme->setObjectName(QString::fromUtf8("actionBlock_AI_Volme"));
        actionBlock_Projeciles_Volume = new QAction(MainWindow);
        actionBlock_Projeciles_Volume->setObjectName(QString::fromUtf8("actionBlock_Projeciles_Volume"));
        actionCinematic_Volume = new QAction(MainWindow);
        actionCinematic_Volume->setObjectName(QString::fromUtf8("actionCinematic_Volume"));
        actionSFX_Volume = new QAction(MainWindow);
        actionSFX_Volume->setObjectName(QString::fromUtf8("actionSFX_Volume"));
        actionPost_Process_Volume = new QAction(MainWindow);
        actionPost_Process_Volume->setObjectName(QString::fromUtf8("actionPost_Process_Volume"));
        actionPhysics_Volume = new QAction(MainWindow);
        actionPhysics_Volume->setObjectName(QString::fromUtf8("actionPhysics_Volume"));
        actionCreate_simple_patch_mesh = new QAction(MainWindow);
        actionCreate_simple_patch_mesh->setObjectName(QString::fromUtf8("actionCreate_simple_patch_mesh"));
        actionCreate_End_cap = new QAction(MainWindow);
        actionCreate_End_cap->setObjectName(QString::fromUtf8("actionCreate_End_cap"));
        actionCreate_Bevel = new QAction(MainWindow);
        actionCreate_Bevel->setObjectName(QString::fromUtf8("actionCreate_Bevel"));
        actionCreate_Cone = new QAction(MainWindow);
        actionCreate_Cone->setObjectName(QString::fromUtf8("actionCreate_Cone"));
        actionCreate_Cylinder = new QAction(MainWindow);
        actionCreate_Cylinder->setObjectName(QString::fromUtf8("actionCreate_Cylinder"));
        actionCreate_Sphere = new QAction(MainWindow);
        actionCreate_Sphere->setObjectName(QString::fromUtf8("actionCreate_Sphere"));
        actionMore_Cylinders = new QAction(MainWindow);
        actionMore_Cylinders->setObjectName(QString::fromUtf8("actionMore_Cylinders"));
        actionThicken_Selected_Patches = new QAction(MainWindow);
        actionThicken_Selected_Patches->setObjectName(QString::fromUtf8("actionThicken_Selected_Patches"));
        actionCap_Selection = new QAction(MainWindow);
        actionCap_Selection->setObjectName(QString::fromUtf8("actionCap_Selection"));
        actionCycle_Cap_Texture = new QAction(MainWindow);
        actionCycle_Cap_Texture->setObjectName(QString::fromUtf8("actionCycle_Cap_Texture"));
        actionStitch_Patch_Texture = new QAction(MainWindow);
        actionStitch_Patch_Texture->setObjectName(QString::fromUtf8("actionStitch_Patch_Texture"));
        actionBulge_Patch = new QAction(MainWindow);
        actionBulge_Patch->setObjectName(QString::fromUtf8("actionBulge_Patch"));
        actionCreate_Dense_Cylinder = new QAction(MainWindow);
        actionCreate_Dense_Cylinder->setObjectName(QString::fromUtf8("actionCreate_Dense_Cylinder"));
        actionCreate_Very_Dense_Cylinder = new QAction(MainWindow);
        actionCreate_Very_Dense_Cylinder->setObjectName(QString::fromUtf8("actionCreate_Very_Dense_Cylinder"));
        actionCreate_Square_Cylinder = new QAction(MainWindow);
        actionCreate_Square_Cylinder->setObjectName(QString::fromUtf8("actionCreate_Square_Cylinder"));
        actionInser_2_Columns_at_the_beginning = new QAction(MainWindow);
        actionInser_2_Columns_at_the_beginning->setObjectName(QString::fromUtf8("actionInser_2_Columns_at_the_beginning"));
        actionInsert_2_Columns_at_the_end = new QAction(MainWindow);
        actionInsert_2_Columns_at_the_end->setObjectName(QString::fromUtf8("actionInsert_2_Columns_at_the_end"));
        actionInsert_2_Rows_at_the_beginning = new QAction(MainWindow);
        actionInsert_2_Rows_at_the_beginning->setObjectName(QString::fromUtf8("actionInsert_2_Rows_at_the_beginning"));
        actionInsert_2_Rows_at_the_end = new QAction(MainWindow);
        actionInsert_2_Rows_at_the_end->setObjectName(QString::fromUtf8("actionInsert_2_Rows_at_the_end"));
        actionDelete_2_Columns_from_the_beginning = new QAction(MainWindow);
        actionDelete_2_Columns_from_the_beginning->setObjectName(QString::fromUtf8("actionDelete_2_Columns_from_the_beginning"));
        actionDelete_2_Columns_from_the_end = new QAction(MainWindow);
        actionDelete_2_Columns_from_the_end->setObjectName(QString::fromUtf8("actionDelete_2_Columns_from_the_end"));
        actionDelete_2_Rows_from_the_beginning = new QAction(MainWindow);
        actionDelete_2_Rows_from_the_beginning->setObjectName(QString::fromUtf8("actionDelete_2_Rows_from_the_beginning"));
        actionDelete_2_Rows_from_the_end = new QAction(MainWindow);
        actionDelete_2_Rows_from_the_end->setObjectName(QString::fromUtf8("actionDelete_2_Rows_from_the_end"));
        actionInvert = new QAction(MainWindow);
        actionInvert->setObjectName(QString::fromUtf8("actionInvert"));
        actionRe_disperse = new QAction(MainWindow);
        actionRe_disperse->setObjectName(QString::fromUtf8("actionRe_disperse"));
        actionTranspose = new QAction(MainWindow);
        actionTranspose->setObjectName(QString::fromUtf8("actionTranspose"));
        actionCreat_NURBS_Curve = new QAction(MainWindow);
        actionCreat_NURBS_Curve->setObjectName(QString::fromUtf8("actionCreat_NURBS_Curve"));
        actionCreate_CatmullRom_Curve = new QAction(MainWindow);
        actionCreate_CatmullRom_Curve->setObjectName(QString::fromUtf8("actionCreate_CatmullRom_Curve"));
        actionConvert_NURBS_to_CatmullRom = new QAction(MainWindow);
        actionConvert_NURBS_to_CatmullRom->setObjectName(QString::fromUtf8("actionConvert_NURBS_to_CatmullRom"));
        actionApend_Curve_Control_Point = new QAction(MainWindow);
        actionApend_Curve_Control_Point->setObjectName(QString::fromUtf8("actionApend_Curve_Control_Point"));
        actionInsert_Curve_Control_Points = new QAction(MainWindow);
        actionInsert_Curve_Control_Points->setObjectName(QString::fromUtf8("actionInsert_Curve_Control_Points"));
        actionRemove_Curve_Controle_Points = new QAction(MainWindow);
        actionRemove_Curve_Controle_Points->setObjectName(QString::fromUtf8("actionRemove_Curve_Controle_Points"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAcceptDrops(false);
        centralWidget->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 22));
        menuBar->setStyleSheet(QString::fromUtf8(" QMenuBar {\n"
"     \n"
"	    font-variant:normal;\n"
"        font-weight:bold;\n"
"		color: rgb(218, 218, 218);\n"
"		font: 10pt \"Segoe UI\";\n"
"        font-style: normal;\n"
" 		border: 1px outset;\n"
"		border-top-color: rgb(48, 48, 48);\n"
"		border-right-color: transparent;\n"
"		border-left-color: transparent;\n"
" 		border-bottom-color: rgb(35, 34, 34);\n"
"	    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(64, 64, 64), stop:1 rgba(51, 49, 49));\n"
"\n"
"\n"
" }\n"
"\n"
" QMenuBar::item {\n"
"\n"
"		font-variant:normal;\n"
"        font-weight:bold;\n"
"		font: 8pt \"Segoe UI\";\n"
"        font-style: normal;\n"
"     	spacing: 3px; /* spacing between menu bar items */\n"
"        padding: 1px 4px;\n"
"  	    border-radius: 4px;\n"
"  	    background: transparent;\n"
" }\n"
"\n"
" QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"	background-color: rgb(131, 16, 197);\n"
"    border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
""
                        "	border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px;\n"
"	border: 0px inset\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     \n"
"	background-color: rgb(93, 93, 93, 255);\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"\n"
" QMenu {\n"
"	 background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(93, 93, 93, 255), stop:1 rgba(70, 70, 70, 255));\n"
"     margin: 2px; /* some spacing around the menu */\n"
"	border-color: rgb(255, 255, 255);\n"
"\n"
" }\n"
"\n"
" QMenu::item {\n"
"     padding: 2px 25px 2px 20px;\n"
"     border: 1px solid transparent; /* reserve space for selection border */\n"
"	 color: rgb(218, 218, 218);\n"
" }\n"
"\n"
" QMenu::item:selected {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(131, 16, 197, 200), stop:1 rgb(92, 10, 139, 200));\n"
"	border-color: #000000;\n"
"	border-radius: 3px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
" QMenu::icon:checked { /* appearance of a 'checked' icon */\n"
"     background: gray;\n"
"    "
                        " border: 1px inset gray;\n"
"     position: absolute;\n"
"     top: 1px;\n"
"     right: 1px;\n"
"     bottom: 1px;\n"
"     left: 1px;\n"
" }\n"
"\n"
" QMenu::separator {\n"
"     height: 1px;\n"
" 	 background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(50, 50, 50, 0), stop:0.335227 rgba(50, 50, 50, 255), stop:0.647727 rgba(50, 50, 50, 255), stop:1 rgba(50, 50, 50, 0));\n"
"     margin-left: 10px;\n"
"     margin-right: 5px;\n"
" }\n"
"\n"
" QMenu::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }\n"
"\n"
" /* non-exclusive indicator = check box style indicator (see QActionGroup::setExclusive) */\n"
" QMenu::indicator:non-exclusive:unchecked {\n"
"     image: url(:/images/checkbox_unchecked.png);\n"
" }\n"
"\n"
" QMenu::indicator:non-exclusive:unchecked:selected {\n"
"     image: url(:/images/checkbox_unchecked_hover.png);\n"
" }\n"
"\n"
" QMenu::indicator:non-exclusive:checked {\n"
"     image: url(:/images/checkbox_checked.png);\n"
" }\n"
"\n"
" QMenu::indicator:non"
                        "-exclusive:checked:selected {\n"
"     image: url(:/images/checkbox_checked_hover.png);\n"
" }\n"
"\n"
" /* exclusive indicator = radio button style indicator (see QActionGroup::setExclusive) */\n"
" QMenu::indicator:exclusive:unchecked {\n"
"     image: url(:/images/radiobutton_unchecked.png);\n"
" }\n"
"\n"
" QMenu::indicator:exclusive:unchecked:selected {\n"
"     image: url(:/images/radiobutton_unchecked_hover.png);\n"
" }\n"
"\n"
" QMenu::indicator:exclusive:checked {\n"
"     image: url(:/images/radiobutton_checked.png);\n"
" }\n"
"\n"
" QMenu::indicator:exclusive:checked:selected {\n"
"     image: url(:/images/radiobutton_checked_hover.png);\n"
" }"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuReload_2 = new QMenu(menuFile);
        menuReload_2->setObjectName(QString::fromUtf8("menuReload_2"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSelection = new QMenu(menuEdit);
        menuSelection->setObjectName(QString::fromUtf8("menuSelection"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuLayout = new QMenu(menuView);
        menuLayout->setObjectName(QString::fromUtf8("menuLayout"));
        menuCamera_Position = new QMenu(menuView);
        menuCamera_Position->setObjectName(QString::fromUtf8("menuCamera_Position"));
        menuCamera = new QMenu(menuView);
        menuCamera->setObjectName(QString::fromUtf8("menuCamera"));
        menuOrthographic = new QMenu(menuView);
        menuOrthographic->setObjectName(QString::fromUtf8("menuOrthographic"));
        menuHide_Show = new QMenu(menuView);
        menuHide_Show->setObjectName(QString::fromUtf8("menuHide_Show"));
        menuShow = new QMenu(menuView);
        menuShow->setObjectName(QString::fromUtf8("menuShow"));
        menuRegion = new QMenu(menuView);
        menuRegion->setObjectName(QString::fromUtf8("menuRegion"));
        menuModify = new QMenu(menuBar);
        menuModify->setObjectName(QString::fromUtf8("menuModify"));
        menuComponents = new QMenu(menuModify);
        menuComponents->setObjectName(QString::fromUtf8("menuComponents"));
        menuNudge = new QMenu(menuModify);
        menuNudge->setObjectName(QString::fromUtf8("menuNudge"));
        menuRotate = new QMenu(menuModify);
        menuRotate->setObjectName(QString::fromUtf8("menuRotate"));
        menuMirror = new QMenu(menuModify);
        menuMirror->setObjectName(QString::fromUtf8("menuMirror"));
        menuGrid = new QMenu(menuBar);
        menuGrid->setObjectName(QString::fromUtf8("menuGrid"));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QString::fromUtf8("menuFilter"));
        menuMap = new QMenu(menuBar);
        menuMap->setObjectName(QString::fromUtf8("menuMap"));
        menuEntity = new QMenu(menuBar);
        menuEntity->setObjectName(QString::fromUtf8("menuEntity"));
        menuBrush = new QMenu(menuBar);
        menuBrush->setObjectName(QString::fromUtf8("menuBrush"));
        menuCSG = new QMenu(menuBrush);
        menuCSG->setObjectName(QString::fromUtf8("menuCSG"));
        menuClipper = new QMenu(menuBrush);
        menuClipper->setObjectName(QString::fromUtf8("menuClipper"));
        menuVolume = new QMenu(menuBar);
        menuVolume->setObjectName(QString::fromUtf8("menuVolume"));
        menuPatch = new QMenu(menuBar);
        menuPatch->setObjectName(QString::fromUtf8("menuPatch"));
        menuInsert = new QMenu(menuPatch);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menuAppend = new QMenu(menuPatch);
        menuAppend->setObjectName(QString::fromUtf8("menuAppend"));
        menuDelete = new QMenu(menuPatch);
        menuDelete->setObjectName(QString::fromUtf8("menuDelete"));
        menuMatrix = new QMenu(menuPatch);
        menuMatrix->setObjectName(QString::fromUtf8("menuMatrix"));
        menuCurve = new QMenu(menuBar);
        menuCurve->setObjectName(QString::fromUtf8("menuCurve"));
        menuScripts = new QMenu(menuBar);
        menuScripts->setObjectName(QString::fromUtf8("menuScripts"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8(" QStatusBar {\n"
"     background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(64, 64, 64, 255), stop:1 rgba(51, 49, 49, 255))\n"
" }\n"
"\n"
" QStatusBar::item {\n"
"     border: 1px solid red;\n"
"     border-radius: 3px;\n"
" }"));
        MainWindow->setStatusBar(statusBar);
        dock_widget2 = new QDockWidget(MainWindow);
        dock_widget2->setObjectName(QString::fromUtf8("dock_widget2"));
        dock_widget2->setStyleSheet(QString::fromUtf8(" QDockWidget {\n"
"	 color: #dadada;\n"
" }\n"
"\n"
" QDockWidget::title {	\n"
"background-image:url(:/Res/Images/Titlebar-graphic.png) ;\n"
"    background-position: bottom left;\n"
"    background-origin: selft;\n"
"    background-repeat: none;\n"
"     text-align: center; /* align the text to the center */\n"
"	 padding: 3px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #414141, stop:1 #333131);\n"
"	 border: 1px inset;\n"
"	 border-top-color: #525151;\n"
"	 border-right-color: #525151;\n"
"	 border-bottom-color:  Transperent;\n"
"	 border-left-color: #525151;\n"
"\n"
" }\n"
"\n"
" QDockWidget::close-button, QDockWidget::float-button {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"     padding: 1px -1px -1px 1px;\n"
" } QDockWidget {\n"
"	 color: #dadada;\n"
" }\n"
""
                        "\n"
" QDockWidget::title {\n"
"     text-align: center; /* align the text to the center */\n"
"	 padding: 3px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #414141, stop:1 #333131);\n"
"	 border: 1px inset;\n"
"	 border-top-color: #525151;\n"
"	 border-right-color: #525151;\n"
"	 border-bottom-color:  Transperent;\n"
"	 border-left-color: #525151;\n"
" }\n"
"\n"
" QDockWidget::close-button, QDockWidget::float-button {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"     padding: 1px -1px -1px 1px;\n"
" }"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout_5 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_3 = new QFrame(dockWidgetContents_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: #2a2828;\n"
"	border: 1px inset;\n"
"    border-color: #525151;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget { /*INIT */\n"
"	border-color: transparent;\n"
"}\n"
"\n"
"QTabBar {\n"
"	border-image: url(:/Res/Images/Tabs/tab-bg.png) 4 10 4 10;\n"
"	border-top: 4px transparent;\n"
"	border-bottom: 4px transparent;\n"
"	border-right: 15px transparent;\n"
"	border-left: 15px transparent;\n"
"	margin-top: 0px;\n"
"	margin-bottom: 0px;\n"
" }\n"
"\n"
"QTabBar::tab {\n"
"	border-image: url(:/Res/Images/Tabs/inact-tab.png) 4 10 4 10;\n"
"	border-top: 4px transparent;\n"
"	border-bottom: 4px transparent;\n"
"	border-right: 15px transparent;\n"
"	border-left: 15px transparent;\n"
"    min-width: 50px;\n"
"	color: rgb(97, 97, 97);\n"
"	padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    margin-left: -10px;\n"
"    margin-right: -10px;\n"
" }\n"
"\n"
"QTabBar::tab:selected {\n"
"    border: 0px transparent;\n"
"	background-color: transparent;\n"
"	border-image: url(:/Res/Images/Tabs/act-tab.png) 4 10 4 10;\n"
"	border-top: 5px transparent;\n"
"	border-bottom: 4px transparent;\n"
"	border-right: 10px transparent;\n"
""
                        "	border-left: 10px transparent;\n"
"	color: #dadada;\n"
" }\n"
"\n"
"QTabBar::tab:first:selected {\n"
"     margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
" }\n"
"\n"
" QTabBar::tab:last:selected {\n"
"     margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
" }\n"
"\n"
"QTabBar::tab:only-one {\n"
"     margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
" }\n"
"\n"
" QTabBar::tear {\n"
"     image: url(tear_indicator.png);\n"
" }\n"
"\n"
"QTabBar::scroller { /* the width of the scroll buttons */\n"
"     width: 20px;\n"
" }\n"
"\n"
" QTabBar QToolButton { /* the scroll buttons are tool buttons */\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(65, 65, 65, 255), stop:0.494318 rgba(56, 56, 56, 255), stop:1 rgba(65, 65, 65, 255));\n"
"	border: 1px solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(34, 34, 34, 255), stop:0.505682 rg"
                        "ba(20, 20, 20, 255), stop:1 rgba(34, 34, 34, 255));\n"
"\n"
" }"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setMovable(true);
        medtab = new QWidget();
        medtab->setObjectName(QString::fromUtf8("medtab"));
        tabWidget->addTab(medtab, QString());
        mattab = new QWidget();
        mattab->setObjectName(QString::fromUtf8("mattab"));
        tabWidget->addTab(mattab, QString());
        proptab = new QWidget();
        proptab->setObjectName(QString::fromUtf8("proptab"));
        tabWidget->addTab(proptab, QString());
        enttab = new QWidget();
        enttab->setObjectName(QString::fromUtf8("enttab"));
        tabWidget->addTab(enttab, QString());
        sndtab = new QWidget();
        sndtab->setObjectName(QString::fromUtf8("sndtab"));
        tabWidget->addTab(sndtab, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_5->addWidget(frame_3);

        dock_widget2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_widget2);
        dock_widget3 = new QDockWidget(MainWindow);
        dock_widget3->setObjectName(QString::fromUtf8("dock_widget3"));
        dock_widget3->setStyleSheet(QString::fromUtf8(" QDockWidget {\n"
"	 color: #dadada;\n"
" }\n"
"\n"
" QDockWidget::title {	\n"
"background-image:url(:/Res/Images/Titlebar-graphic.png) ;\n"
"    background-position: bottom left;\n"
"    background-origin: selft;\n"
"    background-repeat: none;\n"
"     text-align: center; /* align the text to the center */\n"
"	 padding: 3px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #414141, stop:1 #333131);\n"
"	 border: 1px inset;\n"
"	 border-top-color: #525151;\n"
"	 border-right-color: #525151;\n"
"	 border-bottom-color:  Transperent;\n"
"	 border-left-color: #525151;\n"
"\n"
" }\n"
"\n"
" QDockWidget::close-button, QDockWidget::float-button {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"     padding: 1px -1px -1px 1px;\n"
" }"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(6);
        frame_4 = new QFrame(dockWidgetContents_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: #2a2828;\n"
"	border: 1px inset;\n"
"    border-color: #525151;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_4, 0, 0, 1, 1);

        dock_widget3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_widget3);
        dock_widget1 = new QDockWidget(MainWindow);
        dock_widget1->setObjectName(QString::fromUtf8("dock_widget1"));
        dock_widget1->setMinimumSize(QSize(153, 304));
        dock_widget1->setAutoFillBackground(false);
        dock_widget1->setStyleSheet(QString::fromUtf8(" QDockWidget {\n"
"	 color: #dadada;\n"
" }\n"
"\n"
" QDockWidget::title {	\n"
"background-image:url(:/Res/Images/Titlebar-graphic.png) ;\n"
"    background-position: bottom left;\n"
"    background-origin: selft;\n"
"    background-repeat: none;\n"
"     text-align: center; /* align the text to the center */\n"
"	 padding: 3px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #414141, stop:1 #333131);\n"
"	 border: 1px inset;\n"
"	 border-top-color: #525151;\n"
"	 border-right-color: #525151;\n"
"	 border-bottom-color:  Transperent;\n"
"	 border-left-color: #525151;\n"
"\n"
" }\n"
"\n"
" QDockWidget::close-button, QDockWidget::float-button {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"     border: 1px solid transparent;\n"
" }\n"
"\n"
" QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"     padding: 1px -1px -1px 1px;\n"
" }"));
        dock_widget1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: #2a2828;\n"
"	border: 1px inset;\n"
"    border-color: #525151;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: rgb(70, 70, 70);\n"
"    border-color: rgb(116, 116, 116);\n"
"	border-radius: 2px;\n"
"	background-image: url(:/Res/Images/tool-shelf-logo.png);\n"
"    background-position: bottom left;\n"
"    background-origin: content;\n"
"    background-repeat: none;\n"
"\n"
"}\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 70);
        toolBox = new QToolBox(frame_2);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox {\n"
"	border: 1px outset;\n"
"	border-color: transparent;\n"
"	background-image: url();\n"
"}\n"
"\n"
" QToolBox::tab {\n"
"	background-color: qlineargradient(spread:reflect, x1:0, y1:0, 			x2:0, y2:1, stop:0 rgba(102, 102, 102, 255), stop:1 rgba(92, 	92, 92, 255));\n"
"        border-radius: 2px;\n"
"	color: rgb(218, 218, 218);\n"
"	border: 1px outset\n"
"}\n"
"\n"
"QWidget {\n"
"	background-color: rgb(70, 70, 70);\n"
"    border-color: transparent;\n"
"}\n"
"\n"
""));
        transpage = new QWidget();
        transpage->setObjectName(QString::fromUtf8("transpage"));
        transpage->setGeometry(QRect(0, 0, 150, 225));
        toolBox->addItem(transpage, QString::fromUtf8("Translation"));
        selectpage = new QWidget();
        selectpage->setObjectName(QString::fromUtf8("selectpage"));
        selectpage->setGeometry(QRect(0, 0, 150, 225));
        toolBox->addItem(selectpage, QString::fromUtf8("Selection"));

        horizontalLayout_4->addWidget(toolBox);


        horizontalLayout_3->addWidget(frame_2);


        horizontalLayout->addWidget(frame);

        dock_widget1->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dock_widget1);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuModify->menuAction());
        menuBar->addAction(menuGrid->menuAction());
        menuBar->addAction(menuFilter->menuAction());
        menuBar->addAction(menuMap->menuAction());
        menuBar->addAction(menuEntity->menuAction());
        menuBar->addAction(menuBrush->menuAction());
        menuBar->addAction(menuVolume->menuAction());
        menuBar->addAction(menuPatch->menuAction());
        menuBar->addAction(menuCurve->menuAction());
        menuBar->addAction(menuScripts->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Map);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Map);
        menuFile->addAction(actionRecent);
        menuFile->addAction(actionImport_Map);
        menuFile->addAction(actionImport_Prefab);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave_Copy_As);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_selecetion_as_Map);
        menuFile->addAction(actionSave_selection_as_Prefab);
        menuFile->addAction(actionExport_selection_as);
        menuFile->addAction(actionSave_Region);
        menuFile->addSeparator();
        menuFile->addAction(menuReload_2->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSelect_Game);
        menuFile->addSeparator();
        menuFile->addAction(actionPoint_File);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuReload_2->addAction(actionReload_all_Models);
        menuReload_2->addAction(actionReload_selected_Models);
        menuReload_2->addAction(actionReload_Skins_2);
        menuReload_2->addAction(actionReload_Scripts_2);
        menuReload_2->addAction(actionReload_Readable_GUIs);
        menuReload_2->addAction(actionReload_Shaders_2);
        menuReload_2->addAction(actionReload_Defs_2);
        menuReload_2->addAction(actionReload_Particles_2);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(menuSelection->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionPaste_to_Camera);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDuplicate);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionReparent_Primitives);
        menuEdit->addAction(actionReparent_Primitives_to_Worldspawn);
        menuEdit->addAction(actionMerge_selected_Entities);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy_Shader_2);
        menuEdit->addAction(actionPaste_shader);
        menuEdit->addAction(actionPaste_Shader_natural);
        menuEdit->addSeparator();
        menuEdit->addAction(actionKeyboard_Shortcuts);
        menuEdit->addAction(actionPreferences);
        menuSelection->addAction(actionClear_selection);
        menuSelection->addAction(actionInvert_selection);
        menuSelection->addAction(actionSelect_complete_tall);
        menuSelection->addAction(actionSelect_inside);
        menuSelection->addAction(actionSelect_touching);
        menuSelection->addAction(actionSelect_children);
        menuSelection->addAction(actionExpand_selection_to_all_Siblings);
        menuView->addAction(actionNew_XY_view);
        menuView->addAction(actionLayers);
        menuView->addAction(actionConsole);
        menuView->addAction(actionAsset_Browser);
        menuView->addAction(actionEntity_Inspector);
        menuView->addAction(actionLight_Inspector);
        menuView->addAction(actionSurface_Inspector);
        menuView->addAction(actionPatch_Inspector);
        menuView->addAction(actionTexture_Tool);
        menuView->addAction(actionScene_Browser);
        menuView->addSeparator();
        menuView->addAction(menuLayout->menuAction());
        menuView->addAction(menuCamera_Position->menuAction());
        menuView->addAction(menuCamera->menuAction());
        menuView->addAction(menuOrthographic->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuShow->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuHide_Show->menuAction());
        menuView->addAction(menuRegion->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionColours);
        menuView->addAction(actionBackground_Image);
        menuLayout->addAction(actionFloating);
        menuLayout->addAction(actionSplit_Pane_4_Up);
        menuLayout->addAction(actionMaximized);
        menuLayout->addAction(actionDefault);
        menuLayout->addAction(actionSave_Custom);
        menuLayout->addAction(actionLoad_Custom);
        menuCamera_Position->addAction(actionTop_Left);
        menuCamera_Position->addAction(actionTop_Right);
        menuCamera_Position->addAction(actionBottom_Left);
        menuCamera_Position->addAction(actionBottom_Right);
        menuCamera->addAction(actionCenter);
        menuCamera->addAction(actionUp_Floor);
        menuCamera->addAction(actionDown_Floor);
        menuCamera->addSeparator();
        menuCamera->addAction(actionNext_Leak);
        menuCamera->addAction(actionPrevious_Leak);
        menuOrthographic->addAction(actionNext_XY_XZ_YZ);
        menuOrthographic->addAction(actionXY_Top);
        menuOrthographic->addAction(actionYZ);
        menuOrthographic->addAction(actionXz);
        menuOrthographic->addSeparator();
        menuOrthographic->addAction(actionZoom_In);
        menuOrthographic->addAction(actionZoom_Out);
        menuOrthographic->addAction(action100_Home);
        menuOrthographic->addAction(action100_Local);
        menuOrthographic->addAction(actionZoom_Selected);
        menuHide_Show->addAction(actionHide_Selected);
        menuHide_Show->addAction(actionHide_Deselected);
        menuHide_Show->addAction(actionShow_Hidden);
        menuShow->addAction(actionShow_Angles);
        menuShow->addAction(actionShow_Names);
        menuShow->addAction(actionShow_Blocks);
        menuShow->addAction(actionShow_Coordinates);
        menuShow->addAction(actionShow_Window_Outline);
        menuShow->addAction(actionShow_Axes);
        menuShow->addAction(actionShow_Workzone);
        menuShow->addAction(actionShow_Size_Info);
        menuRegion->addAction(actionSwitch_off);
        menuRegion->addAction(actionSt_from_XY_view);
        menuRegion->addAction(actionSet_from_Brush);
        menuRegion->addAction(actionSet_from_Selection);
        menuModify->addAction(menuComponents->menuAction());
        menuModify->addSeparator();
        menuModify->addAction(menuNudge->menuAction());
        menuModify->addAction(menuRotate->menuAction());
        menuModify->addAction(menuMirror->menuAction());
        menuModify->addSeparator();
        menuModify->addAction(actionFree_Model_Rotation);
        menuModify->addSeparator();
        menuModify->addAction(actionRotate_and_scale);
        menuComponents->addAction(actionEdges);
        menuComponents->addAction(actionVertices);
        menuComponents->addAction(actionFaces);
        menuComponents->addAction(actionEntities);
        menuNudge->addAction(actionNudge_Left);
        menuNudge->addAction(actionNudge_Right);
        menuNudge->addAction(actionNudge_Up);
        menuNudge->addAction(actionNudge_Down);
        menuRotate->addAction(actionRotate_X);
        menuRotate->addAction(actionRotate_Y);
        menuRotate->addAction(actionRotate_Z);
        menuMirror->addAction(actionMirror_X);
        menuMirror->addAction(actionMirror_Y);
        menuMirror->addAction(actionMirror_Z);
        menuGrid->addAction(actionSnap_selected_to_grid);
        menuGrid->addSeparator();
        menuGrid->addAction(actionGrid_0_125);
        menuGrid->addAction(actionGrid_0_25);
        menuGrid->addAction(actionGrid_0_5);
        menuGrid->addAction(actionGrid_1);
        menuGrid->addAction(actionGrid_2);
        menuGrid->addAction(actionGrid_4);
        menuGrid->addAction(actionGrid_8);
        menuGrid->addAction(actionGrid_9);
        menuGrid->addAction(actionGrid_16);
        menuGrid->addAction(actionGrid_32);
        menuGrid->addAction(actionGrid_64);
        menuGrid->addAction(actionGrid_128);
        menuGrid->addAction(actionGrid_256);
        menuFilter->addAction(actionAll_Entities);
        menuFilter->addAction(actionBrushes);
        menuFilter->addAction(actionCaulk);
        menuFilter->addAction(actionClip_Textures);
        menuFilter->addAction(actionCollision_Surfaces);
        menuFilter->addAction(actionDecals);
        menuFilter->addAction(actionLights);
        menuFilter->addAction(actionNodraw_Textures);
        menuFilter->addAction(actionPatches);
        menuFilter->addAction(actionPaths);
        menuFilter->addAction(actionShadow_Textures);
        menuFilter->addAction(actionTrigger_Textures);
        menuFilter->addAction(actionVisportals);
        menuFilter->addAction(actionWeather_Textures);
        menuFilter->addAction(actionWorld_Geometry);
        menuFilter->addSeparator();
        menuFilter->addAction(actionActivate_all_Filters);
        menuFilter->addAction(actionDeactivate_all_filters);
        menuFilter->addSeparator();
        menuFilter->addAction(actionEdit_Filters);
        menuMap->addAction(actionMap_Info);
        menuMap->addSeparator();
        menuMap->addAction(actionFind_Brush);
        menuMap->addSeparator();
        menuMap->addAction(actionFixup_Map);
        menuMap->addSeparator();
        menuMap->addAction(actionConversations);
        menuMap->addAction(actionDifficulty);
        menuMap->addAction(actionObjectives);
        menuEntity->addAction(actionRevert_group_to_worldspawn);
        menuEntity->addAction(actionConnect_selected_entities);
        menuEntity->addAction(actionBind_selected_entities);
        menuEntity->addAction(actionEntity_Class_Tree);
        menuBrush->addAction(actionPrism);
        menuBrush->addAction(actionCone);
        menuBrush->addAction(actionSphere);
        menuBrush->addSeparator();
        menuBrush->addAction(menuCSG->menuAction());
        menuBrush->addAction(menuClipper->menuAction());
        menuBrush->addSeparator();
        menuBrush->addAction(actionTexture_Lock);
        menuBrush->addSeparator();
        menuBrush->addAction(actionCreate_Decal_Patches);
        menuBrush->addAction(actionMake_Visportal);
        menuCSG->addAction(actionCSG_Add);
        menuCSG->addAction(actionCSG_Subtract);
        menuCSG->addAction(actionCSG_Merge);
        menuCSG->addSeparator();
        menuCSG->addAction(actionMake_Hollow);
        menuCSG->addAction(actionMake_Room);
        menuClipper->addAction(actionClip_Selection);
        menuClipper->addAction(actionSplit_Selection);
        menuClipper->addAction(actionFlip_Clip_Orientation);
        menuVolume->addAction(actionTrigger_Volume);
        menuVolume->addAction(actionWater_Volume);
        menuVolume->addAction(actionForce_Volume);
        menuVolume->addAction(actionPain_Volume);
        menuVolume->addAction(actionBlock_All_Volume);
        menuVolume->addAction(actionBlock_AI_Volme);
        menuVolume->addAction(actionBlock_Projeciles_Volume);
        menuVolume->addAction(actionCinematic_Volume);
        menuVolume->addAction(actionSFX_Volume);
        menuVolume->addAction(actionPost_Process_Volume);
        menuVolume->addAction(actionPhysics_Volume);
        menuPatch->addAction(actionCreate_simple_patch_mesh);
        menuPatch->addSeparator();
        menuPatch->addAction(actionCreate_End_cap);
        menuPatch->addAction(actionCreate_Bevel);
        menuPatch->addSeparator();
        menuPatch->addAction(actionCreate_Cone);
        menuPatch->addAction(actionCreate_Cylinder);
        menuPatch->addAction(actionCreate_Sphere);
        menuPatch->addAction(actionMore_Cylinders);
        menuPatch->addSeparator();
        menuPatch->addAction(menuInsert->menuAction());
        menuPatch->addAction(menuAppend->menuAction());
        menuPatch->addAction(menuDelete->menuAction());
        menuPatch->addSeparator();
        menuPatch->addAction(menuMatrix->menuAction());
        menuPatch->addSeparator();
        menuPatch->addAction(actionThicken_Selected_Patches);
        menuPatch->addAction(actionCap_Selection);
        menuPatch->addAction(actionCycle_Cap_Texture);
        menuPatch->addSeparator();
        menuPatch->addAction(actionStitch_Patch_Texture);
        menuPatch->addAction(actionBulge_Patch);
        menuInsert->addAction(actionCreate_Dense_Cylinder);
        menuInsert->addAction(actionCreate_Very_Dense_Cylinder);
        menuInsert->addAction(actionCreate_Square_Cylinder);
        menuAppend->addAction(actionInser_2_Columns_at_the_beginning);
        menuAppend->addAction(actionInsert_2_Columns_at_the_end);
        menuAppend->addSeparator();
        menuAppend->addAction(actionInsert_2_Rows_at_the_beginning);
        menuAppend->addAction(actionInsert_2_Rows_at_the_end);
        menuDelete->addAction(actionDelete_2_Columns_from_the_beginning);
        menuDelete->addAction(actionDelete_2_Columns_from_the_end);
        menuDelete->addSeparator();
        menuDelete->addAction(actionDelete_2_Rows_from_the_beginning);
        menuDelete->addAction(actionDelete_2_Rows_from_the_end);
        menuMatrix->addAction(actionInvert);
        menuMatrix->addAction(actionRe_disperse);
        menuMatrix->addAction(actionTranspose);
        menuCurve->addAction(actionCreat_NURBS_Curve);
        menuCurve->addAction(actionCreate_CatmullRom_Curve);
        menuCurve->addSeparator();
        menuCurve->addAction(actionConvert_NURBS_to_CatmullRom);
        menuCurve->addSeparator();
        menuCurve->addAction(actionApend_Curve_Control_Point);
        menuCurve->addAction(actionInsert_Curve_Control_Points);
        menuCurve->addAction(actionRemove_Curve_Controle_Points);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionNew_Map);
        toolBar->addAction(actionOpen_Map);
        toolBar->addAction(actionSave);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaste);
        toolBar_3->addAction(actionUndo);
        toolBar_3->addAction(actionRedo);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);
        toolBox->layout()->setSpacing(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Solis Tool Kit", 0, QApplication::UnicodeUTF8));
        actionNew_Map->setText(QApplication::translate("MainWindow", "New Map", 0, QApplication::UnicodeUTF8));
        actionOpen_Map->setText(QApplication::translate("MainWindow", "Open Map", 0, QApplication::UnicodeUTF8));
        actionImport_Map->setText(QApplication::translate("MainWindow", "Import Map", 0, QApplication::UnicodeUTF8));
        actionImport_Prefab->setText(QApplication::translate("MainWindow", "Import Prefab", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save as", 0, QApplication::UnicodeUTF8));
        actionSave_Copy_As->setText(QApplication::translate("MainWindow", "Save copy as", 0, QApplication::UnicodeUTF8));
        actionSave_selecetion_as_Map->setText(QApplication::translate("MainWindow", "Save selecetion as Map", 0, QApplication::UnicodeUTF8));
        actionSave_selection_as_Prefab->setText(QApplication::translate("MainWindow", "Save selection as Prefab", 0, QApplication::UnicodeUTF8));
        actionExport_selection_as->setText(QApplication::translate("MainWindow", "Export selection", 0, QApplication::UnicodeUTF8));
        actionSave_Region->setText(QApplication::translate("MainWindow", "Save Region", 0, QApplication::UnicodeUTF8));
        actionReload_Models->setText(QApplication::translate("MainWindow", "Reload Models", 0, QApplication::UnicodeUTF8));
        actionReload_Selected_Models->setText(QApplication::translate("MainWindow", "Reload Selected Models", 0, QApplication::UnicodeUTF8));
        actionReload_Skins->setText(QApplication::translate("MainWindow", "Reload Skins", 0, QApplication::UnicodeUTF8));
        actionReload_Scripts->setText(QApplication::translate("MainWindow", "Reload Scripts", 0, QApplication::UnicodeUTF8));
        actionReload_GUIs->setText(QApplication::translate("MainWindow", "Reload readable GUIs", 0, QApplication::UnicodeUTF8));
        actionReload_Shaders->setText(QApplication::translate("MainWindow", "Reload Shaders", 0, QApplication::UnicodeUTF8));
        actionReload_Defs->setText(QApplication::translate("MainWindow", "Reload Defs", 0, QApplication::UnicodeUTF8));
        actionReload_Particles->setText(QApplication::translate("MainWindow", "Reload Particles", 0, QApplication::UnicodeUTF8));
        actionSelect_Game->setText(QApplication::translate("MainWindow", "Select Game", 0, QApplication::UnicodeUTF8));
        actionPoint_File->setText(QApplication::translate("MainWindow", "Load Point File", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionReload_selected_Models->setText(QApplication::translate("MainWindow", "Reload selected Models", 0, QApplication::UnicodeUTF8));
        actionReload_all_Models->setText(QApplication::translate("MainWindow", "Reload all Models", 0, QApplication::UnicodeUTF8));
        actionReload_Skins_2->setText(QApplication::translate("MainWindow", "Reload Skins", 0, QApplication::UnicodeUTF8));
        actionReload_Scripts_2->setText(QApplication::translate("MainWindow", "Reload Scripts", 0, QApplication::UnicodeUTF8));
        actionReload_Readable_GUIs->setText(QApplication::translate("MainWindow", "Reload Readable GUIs", 0, QApplication::UnicodeUTF8));
        actionReload_Shaders_2->setText(QApplication::translate("MainWindow", "Reload Shaders", 0, QApplication::UnicodeUTF8));
        actionReload_Defs_2->setText(QApplication::translate("MainWindow", "Reload Defs", 0, QApplication::UnicodeUTF8));
        actionReload_Particles_2->setText(QApplication::translate("MainWindow", "Reload Particles", 0, QApplication::UnicodeUTF8));
        actionRecent->setText(QApplication::translate("MainWindow", "Open Recent", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste_to_Camera->setText(QApplication::translate("MainWindow", "Paste to Camera", 0, QApplication::UnicodeUTF8));
        actionDuplicate->setText(QApplication::translate("MainWindow", "Duplicate", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionReparent_Primitives->setText(QApplication::translate("MainWindow", "Reparent Primitives", 0, QApplication::UnicodeUTF8));
        actionReparent_Primitives_to_Worldspawn->setText(QApplication::translate("MainWindow", "Reparent Primitives to Worldspawn", 0, QApplication::UnicodeUTF8));
        actionMerge_selected_Entities->setText(QApplication::translate("MainWindow", "Merge selected Entities", 0, QApplication::UnicodeUTF8));
        actionCopy_Shader->setText(QApplication::translate("MainWindow", "Copy Shader", 0, QApplication::UnicodeUTF8));
        actionPaste_Shader->setText(QApplication::translate("MainWindow", "Paste Shader", 0, QApplication::UnicodeUTF8));
        actionClear_selection->setText(QApplication::translate("MainWindow", "Clear selection", 0, QApplication::UnicodeUTF8));
        actionInvert_selection->setText(QApplication::translate("MainWindow", "Invert selection", 0, QApplication::UnicodeUTF8));
        actionSelect_complete_tall->setText(QApplication::translate("MainWindow", "Select complete tall", 0, QApplication::UnicodeUTF8));
        actionSelect_inside->setText(QApplication::translate("MainWindow", "Select inside", 0, QApplication::UnicodeUTF8));
        actionSelect_touching->setText(QApplication::translate("MainWindow", "Select touching", 0, QApplication::UnicodeUTF8));
        actionSelect_children->setText(QApplication::translate("MainWindow", "Select children", 0, QApplication::UnicodeUTF8));
        actionExpand_selection_to_all_Siblings->setText(QApplication::translate("MainWindow", "Expand selection to all Siblings", 0, QApplication::UnicodeUTF8));
        actionKeyboard_Shortcuts->setText(QApplication::translate("MainWindow", "Keyboard Shortcuts", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        actionCopy_Shader_2->setText(QApplication::translate("MainWindow", "Copy Shader", 0, QApplication::UnicodeUTF8));
        actionPaste_shader->setText(QApplication::translate("MainWindow", "Paste Shader", 0, QApplication::UnicodeUTF8));
        actionPaste_Shader_natural->setText(QApplication::translate("MainWindow", "Paste Shader (natural)", 0, QApplication::UnicodeUTF8));
        actionNew_XY_view->setText(QApplication::translate("MainWindow", "New XY view", 0, QApplication::UnicodeUTF8));
        actionLayers->setText(QApplication::translate("MainWindow", "Layers", 0, QApplication::UnicodeUTF8));
        actionConsole->setText(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        actionAsset_Browser->setText(QApplication::translate("MainWindow", "Asset Browser", 0, QApplication::UnicodeUTF8));
        actionEntity_Inspector->setText(QApplication::translate("MainWindow", "Entity Inspector", 0, QApplication::UnicodeUTF8));
        actionLight_Inspector->setText(QApplication::translate("MainWindow", "Light Inspector", 0, QApplication::UnicodeUTF8));
        actionSurface_Inspector->setText(QApplication::translate("MainWindow", "Surface Inspector", 0, QApplication::UnicodeUTF8));
        actionPatch_Inspector->setText(QApplication::translate("MainWindow", "Patch Inspector", 0, QApplication::UnicodeUTF8));
        actionTexture_Tool->setText(QApplication::translate("MainWindow", "Texture Tool", 0, QApplication::UnicodeUTF8));
        actionScene_Browser->setText(QApplication::translate("MainWindow", "Scene Browser", 0, QApplication::UnicodeUTF8));
        actionColours->setText(QApplication::translate("MainWindow", "Colours", 0, QApplication::UnicodeUTF8));
        actionBackground_Image->setText(QApplication::translate("MainWindow", "Background Image", 0, QApplication::UnicodeUTF8));
        actionFloating->setText(QApplication::translate("MainWindow", "Floating ", 0, QApplication::UnicodeUTF8));
        actionSplit_Pane_4_Up->setText(QApplication::translate("MainWindow", "Split Pane (4 Up)", 0, QApplication::UnicodeUTF8));
        actionDefault->setText(QApplication::translate("MainWindow", "Default", 0, QApplication::UnicodeUTF8));
        actionSave_Custom->setText(QApplication::translate("MainWindow", "Save Custom", 0, QApplication::UnicodeUTF8));
        actionLoad_Custom->setText(QApplication::translate("MainWindow", "Load Custom", 0, QApplication::UnicodeUTF8));
        actionMaximized->setText(QApplication::translate("MainWindow", "Maximized", 0, QApplication::UnicodeUTF8));
        actionTop_Left->setText(QApplication::translate("MainWindow", "Top Left", 0, QApplication::UnicodeUTF8));
        actionTop_Right->setText(QApplication::translate("MainWindow", "Top Right", 0, QApplication::UnicodeUTF8));
        actionBottom_Left->setText(QApplication::translate("MainWindow", "Bottom Left", 0, QApplication::UnicodeUTF8));
        actionBottom_Right->setText(QApplication::translate("MainWindow", "Bottom Right", 0, QApplication::UnicodeUTF8));
        actionCenter->setText(QApplication::translate("MainWindow", "Center", 0, QApplication::UnicodeUTF8));
        actionUp_Floor->setText(QApplication::translate("MainWindow", "Up Floor", 0, QApplication::UnicodeUTF8));
        actionDown_Floor->setText(QApplication::translate("MainWindow", "Down Floor", 0, QApplication::UnicodeUTF8));
        actionNext_Leak->setText(QApplication::translate("MainWindow", "Next Leak", 0, QApplication::UnicodeUTF8));
        actionPrevious_Leak->setText(QApplication::translate("MainWindow", "Previous Leak", 0, QApplication::UnicodeUTF8));
        actionNext_XY_XZ_YZ->setText(QApplication::translate("MainWindow", "Next (XY. XZ. YZ)", 0, QApplication::UnicodeUTF8));
        actionXY_Top->setText(QApplication::translate("MainWindow", "XY (Top)", 0, QApplication::UnicodeUTF8));
        actionYZ->setText(QApplication::translate("MainWindow", "YZ", 0, QApplication::UnicodeUTF8));
        actionXz->setText(QApplication::translate("MainWindow", "Xz", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        action100_Home->setText(QApplication::translate("MainWindow", "100% (Home)", 0, QApplication::UnicodeUTF8));
        action100_Local->setText(QApplication::translate("MainWindow", "100% (Local)", 0, QApplication::UnicodeUTF8));
        actionZoom_Selected->setText(QApplication::translate("MainWindow", "Zoom Selected", 0, QApplication::UnicodeUTF8));
        actionShow_Angles->setText(QApplication::translate("MainWindow", "Show Angles", 0, QApplication::UnicodeUTF8));
        actionShow_Names->setText(QApplication::translate("MainWindow", "Show Names", 0, QApplication::UnicodeUTF8));
        actionShow_Blocks->setText(QApplication::translate("MainWindow", "Show Blocks", 0, QApplication::UnicodeUTF8));
        actionShow_Coordinates->setText(QApplication::translate("MainWindow", "Show Coordinates", 0, QApplication::UnicodeUTF8));
        actionShow_Window_Outline->setText(QApplication::translate("MainWindow", "Show Window Outline", 0, QApplication::UnicodeUTF8));
        actionShow_Axes->setText(QApplication::translate("MainWindow", "Show Axes", 0, QApplication::UnicodeUTF8));
        actionShow_Workzone->setText(QApplication::translate("MainWindow", "Show Workzone", 0, QApplication::UnicodeUTF8));
        actionShow_Size_Info->setText(QApplication::translate("MainWindow", "Show Size Info", 0, QApplication::UnicodeUTF8));
        actionHide_Selected->setText(QApplication::translate("MainWindow", "Hide Selected", 0, QApplication::UnicodeUTF8));
        actionHide_Deselected->setText(QApplication::translate("MainWindow", "Hide Deselected", 0, QApplication::UnicodeUTF8));
        actionShow_Hidden->setText(QApplication::translate("MainWindow", "Show Hidden", 0, QApplication::UnicodeUTF8));
        actionSwitch_off->setText(QApplication::translate("MainWindow", "Switch off", 0, QApplication::UnicodeUTF8));
        actionSt_from_XY_view->setText(QApplication::translate("MainWindow", "St from XY view", 0, QApplication::UnicodeUTF8));
        actionSet_from_Brush->setText(QApplication::translate("MainWindow", "Set from Brush", 0, QApplication::UnicodeUTF8));
        actionSet_from_Selection->setText(QApplication::translate("MainWindow", "Set from Selection", 0, QApplication::UnicodeUTF8));
        actionFree_Model_Rotation->setText(QApplication::translate("MainWindow", "Free Model Rotation", 0, QApplication::UnicodeUTF8));
        actionRotate_and_scale->setText(QApplication::translate("MainWindow", "Rotate and scale", 0, QApplication::UnicodeUTF8));
        actionEdges->setText(QApplication::translate("MainWindow", "Edges", 0, QApplication::UnicodeUTF8));
        actionVertices->setText(QApplication::translate("MainWindow", "Vertices", 0, QApplication::UnicodeUTF8));
        actionFaces->setText(QApplication::translate("MainWindow", "Faces", 0, QApplication::UnicodeUTF8));
        actionEntities->setText(QApplication::translate("MainWindow", "Entities", 0, QApplication::UnicodeUTF8));
        actionNudge_Left->setText(QApplication::translate("MainWindow", "Nudge Left", 0, QApplication::UnicodeUTF8));
        actionNudge_Right->setText(QApplication::translate("MainWindow", "Nudge Right", 0, QApplication::UnicodeUTF8));
        actionNudge_Up->setText(QApplication::translate("MainWindow", "Nudge Up", 0, QApplication::UnicodeUTF8));
        actionNudge_Down->setText(QApplication::translate("MainWindow", "Nudge Down", 0, QApplication::UnicodeUTF8));
        actionRotate_X->setText(QApplication::translate("MainWindow", "Rotate X", 0, QApplication::UnicodeUTF8));
        actionRotate_Y->setText(QApplication::translate("MainWindow", "Rotate Y", 0, QApplication::UnicodeUTF8));
        actionRotate_Z->setText(QApplication::translate("MainWindow", "Rotate Z", 0, QApplication::UnicodeUTF8));
        actionMirror_X->setText(QApplication::translate("MainWindow", "Mirror X", 0, QApplication::UnicodeUTF8));
        actionMirror_Y->setText(QApplication::translate("MainWindow", "Mirror Y", 0, QApplication::UnicodeUTF8));
        actionMirror_Z->setText(QApplication::translate("MainWindow", "Mirror Z", 0, QApplication::UnicodeUTF8));
        actionSnap_selected_to_grid->setText(QApplication::translate("MainWindow", "Snap selected to grid", 0, QApplication::UnicodeUTF8));
        actionGrid_0_125->setText(QApplication::translate("MainWindow", "Grid 0.125", 0, QApplication::UnicodeUTF8));
        actionGrid_0_25->setText(QApplication::translate("MainWindow", "Grid 0.25", 0, QApplication::UnicodeUTF8));
        actionGrid_0_5->setText(QApplication::translate("MainWindow", "Grid 0.5", 0, QApplication::UnicodeUTF8));
        actionGrid_1->setText(QApplication::translate("MainWindow", "Grid 1", 0, QApplication::UnicodeUTF8));
        actionGrid_2->setText(QApplication::translate("MainWindow", "Grid 2", 0, QApplication::UnicodeUTF8));
        actionGrid_4->setText(QApplication::translate("MainWindow", "Grid 4", 0, QApplication::UnicodeUTF8));
        actionGrid_8->setText(QApplication::translate("MainWindow", "Grid 8", 0, QApplication::UnicodeUTF8));
        actionGrid_9->setText(QApplication::translate("MainWindow", "Grid 8", 0, QApplication::UnicodeUTF8));
        actionGrid_16->setText(QApplication::translate("MainWindow", "Grid 16", 0, QApplication::UnicodeUTF8));
        actionGrid_32->setText(QApplication::translate("MainWindow", "Grid 32", 0, QApplication::UnicodeUTF8));
        actionGrid_64->setText(QApplication::translate("MainWindow", "Grid 64", 0, QApplication::UnicodeUTF8));
        actionGrid_128->setText(QApplication::translate("MainWindow", "Grid 128", 0, QApplication::UnicodeUTF8));
        actionGrid_256->setText(QApplication::translate("MainWindow", "Grid 256", 0, QApplication::UnicodeUTF8));
        actionAll_Entities->setText(QApplication::translate("MainWindow", "All Entities", 0, QApplication::UnicodeUTF8));
        actionBrushes->setText(QApplication::translate("MainWindow", "Brushes", 0, QApplication::UnicodeUTF8));
        actionCaulk->setText(QApplication::translate("MainWindow", "Caulk", 0, QApplication::UnicodeUTF8));
        actionClip_Textures->setText(QApplication::translate("MainWindow", "Clip Textures", 0, QApplication::UnicodeUTF8));
        actionCollision_Surfaces->setText(QApplication::translate("MainWindow", "Collision Surfaces", 0, QApplication::UnicodeUTF8));
        actionDecals->setText(QApplication::translate("MainWindow", "Decals", 0, QApplication::UnicodeUTF8));
        actionLights->setText(QApplication::translate("MainWindow", "Lights", 0, QApplication::UnicodeUTF8));
        actionNodraw_Textures->setText(QApplication::translate("MainWindow", "Nodraw Textures", 0, QApplication::UnicodeUTF8));
        actionPatches->setText(QApplication::translate("MainWindow", "Patches", 0, QApplication::UnicodeUTF8));
        actionPaths->setText(QApplication::translate("MainWindow", "Paths", 0, QApplication::UnicodeUTF8));
        actionShadow_Textures->setText(QApplication::translate("MainWindow", "Shadow Textures", 0, QApplication::UnicodeUTF8));
        actionTrigger_Textures->setText(QApplication::translate("MainWindow", "Trigger Textures", 0, QApplication::UnicodeUTF8));
        actionVisportals->setText(QApplication::translate("MainWindow", "Visportals", 0, QApplication::UnicodeUTF8));
        actionWeather_Textures->setText(QApplication::translate("MainWindow", "Weather Textures", 0, QApplication::UnicodeUTF8));
        actionWorld_Geometry->setText(QApplication::translate("MainWindow", "World Geometry", 0, QApplication::UnicodeUTF8));
        actionActivate_all_Filters->setText(QApplication::translate("MainWindow", "Activate all Filters", 0, QApplication::UnicodeUTF8));
        actionDeactivate_all_filters->setText(QApplication::translate("MainWindow", "Deactivate all filters", 0, QApplication::UnicodeUTF8));
        actionEdit_Filters->setText(QApplication::translate("MainWindow", "Edit Filters", 0, QApplication::UnicodeUTF8));
        actionBuild_All->setText(QApplication::translate("MainWindow", "Build All", 0, QApplication::UnicodeUTF8));
        actionFind_Brush->setText(QApplication::translate("MainWindow", "Find Brush", 0, QApplication::UnicodeUTF8));
        actionMap_Info->setText(QApplication::translate("MainWindow", "Map Info", 0, QApplication::UnicodeUTF8));
        actionConversations->setText(QApplication::translate("MainWindow", "Conversations", 0, QApplication::UnicodeUTF8));
        actionFixup_Map->setText(QApplication::translate("MainWindow", "Fixup Map", 0, QApplication::UnicodeUTF8));
        actionDifficulty->setText(QApplication::translate("MainWindow", "Difficulty", 0, QApplication::UnicodeUTF8));
        actionObjectives->setText(QApplication::translate("MainWindow", "Objectives", 0, QApplication::UnicodeUTF8));
        actionRevert_group_to_worldspawn->setText(QApplication::translate("MainWindow", "Revert group to worldspawn", 0, QApplication::UnicodeUTF8));
        actionConnect_selected_entities->setText(QApplication::translate("MainWindow", "Connect selected entities", 0, QApplication::UnicodeUTF8));
        actionBind_selected_entities->setText(QApplication::translate("MainWindow", "Bind selected entities", 0, QApplication::UnicodeUTF8));
        actionEntity_Class_Tree->setText(QApplication::translate("MainWindow", "Entity Class Tree", 0, QApplication::UnicodeUTF8));
        actionPrism->setText(QApplication::translate("MainWindow", "Prism", 0, QApplication::UnicodeUTF8));
        actionCone->setText(QApplication::translate("MainWindow", "Cone", 0, QApplication::UnicodeUTF8));
        actionSphere->setText(QApplication::translate("MainWindow", "Sphere", 0, QApplication::UnicodeUTF8));
        actionTexture_Lock->setText(QApplication::translate("MainWindow", "Texture Lock", 0, QApplication::UnicodeUTF8));
        actionCreate_Decal_Patches->setText(QApplication::translate("MainWindow", "Create Decal Patches", 0, QApplication::UnicodeUTF8));
        actionMake_Visportal->setText(QApplication::translate("MainWindow", "Make Visportal", 0, QApplication::UnicodeUTF8));
        actionMake_Hollow->setText(QApplication::translate("MainWindow", "Make Hollow", 0, QApplication::UnicodeUTF8));
        actionMake_Room->setText(QApplication::translate("MainWindow", "Make Room", 0, QApplication::UnicodeUTF8));
        actionCSG_Subtract->setText(QApplication::translate("MainWindow", "CSG Subtract", 0, QApplication::UnicodeUTF8));
        actionCSG_Merge->setText(QApplication::translate("MainWindow", "CSG Merge", 0, QApplication::UnicodeUTF8));
        actionCSG_Add->setText(QApplication::translate("MainWindow", "CSG Add", 0, QApplication::UnicodeUTF8));
        actionClip_Selection->setText(QApplication::translate("MainWindow", "Clip Selection", 0, QApplication::UnicodeUTF8));
        actionSplit_Selection->setText(QApplication::translate("MainWindow", "Split Selection", 0, QApplication::UnicodeUTF8));
        actionFlip_Clip_Orientation->setText(QApplication::translate("MainWindow", "Flip Clip Orientation", 0, QApplication::UnicodeUTF8));
        actionTrigger_Volume->setText(QApplication::translate("MainWindow", "Trigger Volume", 0, QApplication::UnicodeUTF8));
        actionWater_Volume->setText(QApplication::translate("MainWindow", "Water Volume", 0, QApplication::UnicodeUTF8));
        actionForce_Volume->setText(QApplication::translate("MainWindow", "Force Volume", 0, QApplication::UnicodeUTF8));
        actionPain_Volume->setText(QApplication::translate("MainWindow", "Pain Volume", 0, QApplication::UnicodeUTF8));
        actionBlock_All_Volume->setText(QApplication::translate("MainWindow", "Block/All Volume", 0, QApplication::UnicodeUTF8));
        actionBlock_AI_Volme->setText(QApplication::translate("MainWindow", "Block/AI Volume", 0, QApplication::UnicodeUTF8));
        actionBlock_Projeciles_Volume->setText(QApplication::translate("MainWindow", "Block/Projectiles Volume", 0, QApplication::UnicodeUTF8));
        actionCinematic_Volume->setText(QApplication::translate("MainWindow", "Cinematic Volume", 0, QApplication::UnicodeUTF8));
        actionSFX_Volume->setText(QApplication::translate("MainWindow", "SFX Volume", 0, QApplication::UnicodeUTF8));
        actionPost_Process_Volume->setText(QApplication::translate("MainWindow", "Post Process Volume", 0, QApplication::UnicodeUTF8));
        actionPhysics_Volume->setText(QApplication::translate("MainWindow", "Physics Volume", 0, QApplication::UnicodeUTF8));
        actionCreate_simple_patch_mesh->setText(QApplication::translate("MainWindow", "Create simple patch mesh", 0, QApplication::UnicodeUTF8));
        actionCreate_End_cap->setText(QApplication::translate("MainWindow", "Create End cap", 0, QApplication::UnicodeUTF8));
        actionCreate_Bevel->setText(QApplication::translate("MainWindow", "Create Bevel", 0, QApplication::UnicodeUTF8));
        actionCreate_Cone->setText(QApplication::translate("MainWindow", "Create Cone", 0, QApplication::UnicodeUTF8));
        actionCreate_Cylinder->setText(QApplication::translate("MainWindow", "Create Cylinder", 0, QApplication::UnicodeUTF8));
        actionCreate_Sphere->setText(QApplication::translate("MainWindow", "Create Sphere", 0, QApplication::UnicodeUTF8));
        actionMore_Cylinders->setText(QApplication::translate("MainWindow", "More Cylinders", 0, QApplication::UnicodeUTF8));
        actionThicken_Selected_Patches->setText(QApplication::translate("MainWindow", "Thicken Selected Patches", 0, QApplication::UnicodeUTF8));
        actionCap_Selection->setText(QApplication::translate("MainWindow", "Cap Selection", 0, QApplication::UnicodeUTF8));
        actionCycle_Cap_Texture->setText(QApplication::translate("MainWindow", "Cycle Cap Texture", 0, QApplication::UnicodeUTF8));
        actionStitch_Patch_Texture->setText(QApplication::translate("MainWindow", "Stitch Patch Texture", 0, QApplication::UnicodeUTF8));
        actionBulge_Patch->setText(QApplication::translate("MainWindow", "Bulge Patch", 0, QApplication::UnicodeUTF8));
        actionCreate_Dense_Cylinder->setText(QApplication::translate("MainWindow", "Create Dense Cylinder", 0, QApplication::UnicodeUTF8));
        actionCreate_Very_Dense_Cylinder->setText(QApplication::translate("MainWindow", "Create Very Dense Cylinder", 0, QApplication::UnicodeUTF8));
        actionCreate_Square_Cylinder->setText(QApplication::translate("MainWindow", "Create Square Cylinder", 0, QApplication::UnicodeUTF8));
        actionInser_2_Columns_at_the_beginning->setText(QApplication::translate("MainWindow", "Inser 2 Columns at the beginning", 0, QApplication::UnicodeUTF8));
        actionInsert_2_Columns_at_the_end->setText(QApplication::translate("MainWindow", "Insert 2 Columns at the end", 0, QApplication::UnicodeUTF8));
        actionInsert_2_Rows_at_the_beginning->setText(QApplication::translate("MainWindow", "Insert 2 Rows at the beginning", 0, QApplication::UnicodeUTF8));
        actionInsert_2_Rows_at_the_end->setText(QApplication::translate("MainWindow", "Insert 2 Rows at the end", 0, QApplication::UnicodeUTF8));
        actionDelete_2_Columns_from_the_beginning->setText(QApplication::translate("MainWindow", "Delete 2 Columns from the beginning", 0, QApplication::UnicodeUTF8));
        actionDelete_2_Columns_from_the_end->setText(QApplication::translate("MainWindow", "Delete 2 Columns from the end", 0, QApplication::UnicodeUTF8));
        actionDelete_2_Rows_from_the_beginning->setText(QApplication::translate("MainWindow", "Delete 2 Rows from the beginning", 0, QApplication::UnicodeUTF8));
        actionDelete_2_Rows_from_the_end->setText(QApplication::translate("MainWindow", "Delete 2 Rows from the end", 0, QApplication::UnicodeUTF8));
        actionInvert->setText(QApplication::translate("MainWindow", "Invert", 0, QApplication::UnicodeUTF8));
        actionRe_disperse->setText(QApplication::translate("MainWindow", "Re-disperse", 0, QApplication::UnicodeUTF8));
        actionTranspose->setText(QApplication::translate("MainWindow", "Transpose", 0, QApplication::UnicodeUTF8));
        actionCreat_NURBS_Curve->setText(QApplication::translate("MainWindow", "Creat NURBS Curve", 0, QApplication::UnicodeUTF8));
        actionCreate_CatmullRom_Curve->setText(QApplication::translate("MainWindow", "Create CatmullRom Curve", 0, QApplication::UnicodeUTF8));
        actionConvert_NURBS_to_CatmullRom->setText(QApplication::translate("MainWindow", "Convert NURBS to CatmullRom", 0, QApplication::UnicodeUTF8));
        actionApend_Curve_Control_Point->setText(QApplication::translate("MainWindow", "Apend Curve Control Point", 0, QApplication::UnicodeUTF8));
        actionInsert_Curve_Control_Points->setText(QApplication::translate("MainWindow", "Insert Curve Control Points", 0, QApplication::UnicodeUTF8));
        actionRemove_Curve_Controle_Points->setText(QApplication::translate("MainWindow", "Remove Curve Controle Points", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuReload_2->setTitle(QApplication::translate("MainWindow", "Reload Item", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuSelection->setTitle(QApplication::translate("MainWindow", "Select", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuLayout->setTitle(QApplication::translate("MainWindow", "Layout", 0, QApplication::UnicodeUTF8));
        menuCamera_Position->setTitle(QApplication::translate("MainWindow", "Camera Position", 0, QApplication::UnicodeUTF8));
        menuCamera->setTitle(QApplication::translate("MainWindow", "Camera", 0, QApplication::UnicodeUTF8));
        menuOrthographic->setTitle(QApplication::translate("MainWindow", "Orthographic", 0, QApplication::UnicodeUTF8));
        menuHide_Show->setTitle(QApplication::translate("MainWindow", "Hide/Show", 0, QApplication::UnicodeUTF8));
        menuShow->setTitle(QApplication::translate("MainWindow", "Show", 0, QApplication::UnicodeUTF8));
        menuRegion->setTitle(QApplication::translate("MainWindow", "Region", 0, QApplication::UnicodeUTF8));
        menuModify->setTitle(QApplication::translate("MainWindow", "Modify", 0, QApplication::UnicodeUTF8));
        menuComponents->setTitle(QApplication::translate("MainWindow", "Components", 0, QApplication::UnicodeUTF8));
        menuNudge->setTitle(QApplication::translate("MainWindow", "Nudge", 0, QApplication::UnicodeUTF8));
        menuRotate->setTitle(QApplication::translate("MainWindow", "Rotate", 0, QApplication::UnicodeUTF8));
        menuMirror->setTitle(QApplication::translate("MainWindow", "Mirror", 0, QApplication::UnicodeUTF8));
        menuGrid->setTitle(QApplication::translate("MainWindow", "Grid", 0, QApplication::UnicodeUTF8));
        menuFilter->setTitle(QApplication::translate("MainWindow", "Filter", 0, QApplication::UnicodeUTF8));
        menuMap->setTitle(QApplication::translate("MainWindow", "Map", 0, QApplication::UnicodeUTF8));
        menuEntity->setTitle(QApplication::translate("MainWindow", "Entity", 0, QApplication::UnicodeUTF8));
        menuBrush->setTitle(QApplication::translate("MainWindow", "Brush", 0, QApplication::UnicodeUTF8));
        menuCSG->setTitle(QApplication::translate("MainWindow", "CSG", 0, QApplication::UnicodeUTF8));
        menuClipper->setTitle(QApplication::translate("MainWindow", "Clipper", 0, QApplication::UnicodeUTF8));
        menuVolume->setTitle(QApplication::translate("MainWindow", "Volume", 0, QApplication::UnicodeUTF8));
        menuPatch->setTitle(QApplication::translate("MainWindow", "Patch", 0, QApplication::UnicodeUTF8));
        menuInsert->setTitle(QApplication::translate("MainWindow", "Insert", 0, QApplication::UnicodeUTF8));
        menuAppend->setTitle(QApplication::translate("MainWindow", "Append", 0, QApplication::UnicodeUTF8));
        menuDelete->setTitle(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        menuMatrix->setTitle(QApplication::translate("MainWindow", "Matrix", 0, QApplication::UnicodeUTF8));
        menuCurve->setTitle(QApplication::translate("MainWindow", "Curve", 0, QApplication::UnicodeUTF8));
        menuScripts->setTitle(QApplication::translate("MainWindow", "Scripts", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        dock_widget2->setWindowTitle(QApplication::translate("MainWindow", "Asset Browser", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(medtab), QApplication::translate("MainWindow", "Media", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(mattab), QApplication::translate("MainWindow", "Materials", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(proptab), QApplication::translate("MainWindow", "Props", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(enttab), QApplication::translate("MainWindow", "Entities", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(sndtab), QApplication::translate("MainWindow", "Sounds", 0, QApplication::UnicodeUTF8));
        dock_widget3->setWindowTitle(QApplication::translate("MainWindow", "Properties", 0, QApplication::UnicodeUTF8));
        dock_widget1->setWindowTitle(QApplication::translate("MainWindow", "Tool Shelf", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(transpage), QApplication::translate("MainWindow", "Translation", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(selectpage), QApplication::translate("MainWindow", "Selection", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", 0, QApplication::UnicodeUTF8));
        toolBar_4->setWindowTitle(QApplication::translate("MainWindow", "toolBar_4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
