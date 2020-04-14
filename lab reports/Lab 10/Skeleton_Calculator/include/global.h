#include <gtk/gtk.h>
#include <stdlib.h>
#include <iostream>
#define __STDC_FORMAT_MACROS


#ifndef _MY__GLOBAL__H
#define _MY__GLOBAL__H

using namespace std;

/**************************************************************
 * GUI window stuff
 **************************************************************/
//! struct to define parameters of the calculator
typedef struct
{
  GtkWidget *window1; //!< pointer to the main window of the GUI

  GtkWidget *label_result;  //!< pointer the label for the output

  GtkWidget *button_0;  //!< the 0 button
  GtkWidget *button_1;  //!<the 1 button
  GtkWidget *button_2;  //!<the 2 button
  GtkWidget *button_3;  //!<the 3 button
  GtkWidget *button_4;  //!<the 4 button
  GtkWidget *button_5;  //!<the 5 button
  GtkWidget *button_6;  //!<the 6 button
  GtkWidget *button_7;  //!<the 7 button
  GtkWidget *button_8;  //!<the 8 button
  GtkWidget *button_9;  //!<the 9 button
  GtkWidget *button_pl; //!<the + button
  GtkWidget *button_mi; //!<the - button
  GtkWidget *button_mu; //!<the x button
  GtkWidget *button_di; //!<the ÷ button
  GtkWidget *button_eq; //!<the = button

  GtkWidget *button_exit;  //!<the exit button

} Gui_Window_AppWidgets; 

extern Gui_Window_AppWidgets *gui_app; //!<GUI App pointer

extern int operand; //!<operand to be submitted to calculator
extern int last_function; //!<function that determines what form of calculation to use
extern int clear_f; //!<clears the last function?

#endif
