/*!
 * \author Thomas Vu & John Jones
 * \version 1.0
 * \date 2020-04-09
 * \bug There are no bugs in this superior progam
 * \warning Improper use of this code may void your car's waranty
 * \copyright GNU Public License
 * \mainpage The Calculator
 * \section intro_sec Introduction
 * This code was developed to torture students.
 * \section compile_sec Compilation
 * Enter your main dir and type Cmake to create your make file. Now go to your build dir and type make to create your make file.
 * \subsection Step1 Cmake
* type cmake in your command line to have your makefile created
 * \subsection Step2 make
 * type make in your command line to have your executible created
*/
#include "global.h"
#include "string.h"

//********************************************************************
// to connect widgets with code
//********************************************************************
 /*!
 * \brief Connects the widget pointers to the glade widgets
 * \param p_builder pointer to the builder structure
 * \details For this function to work, the widget class must have poitners for all widgets that we want to modify from the code.
*/
void ObtainGuiWidgets(GtkBuilder *p_builder)
{
  #define GuiappGET(xx) gui_app->xx=GTK_WIDGET(gtk_builder_get_object(p_builder,#xx))
  GuiappGET(window1);
  GuiappGET(label_result);
  GuiappGET(button_0);
  GuiappGET(button_1);
  GuiappGET(button_2);
  GuiappGET(button_3);
  GuiappGET(button_4);
  GuiappGET(button_5);
  GuiappGET(button_6);
  GuiappGET(button_7);
  GuiappGET(button_8);
  GuiappGET(button_9);
  GuiappGET(button_pl);
  GuiappGET(button_mi);
  GuiappGET(button_mu);
  GuiappGET(button_di);
  GuiappGET(button_eq);
  GuiappGET(button_exit);
}


//********************************************************************
// GUI handlers
//********************************************************************
/*!
 * \brief defines what happens when button 0 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_0_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value*=10;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 1 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_1_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=1;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 2 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_2_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=2;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 3 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_3_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=3;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 4 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_4_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=4;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 5 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_5_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=5;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 6 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_6_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=6;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 7 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_7_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=7;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 8 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_8_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=8;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when button 9 gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_9_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  int a_d_value=0;
  if(!clear_f)
    {
       a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
       a_d_value = atoi(a_cc_value);
       a_d_value*=10;
    }
  a_d_value+=9;
  clear_f=false;

  sprintf(c_cc_value,"%d",a_d_value);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when plus button gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_pl_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  double a_d_value;
  a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
  a_d_value = atoi(a_cc_value);

  switch (last_function)
    {
       case 1:
	 operand-=a_d_value;
	 break;
       case 2:
	 operand*=a_d_value;
	 break;
       case 3:
	 operand/=a_d_value;
	 break;
       case 0:
	 operand+=a_d_value;
	 break;
       default:
	 break;
    }

  last_function=0;
  clear_f = true;

  sprintf(c_cc_value,"%d",operand);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when minus button gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_mi_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  double a_d_value;
  a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
  a_d_value = atoi(a_cc_value);

  switch (last_function)
    {
       case 1:
	 operand-=a_d_value;
	 break;
       case 2:
	 operand*=a_d_value;
	 break;
       case 3:
	 operand/=a_d_value;
	 break;
       case 0:
	 operand+=a_d_value;
	 break;
       default:
	 break;
    }

  last_function=1;
  clear_f = true;

  sprintf(c_cc_value,"%d",operand);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when multiply button gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_mu_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  double a_d_value;
  a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
  a_d_value = atoi(a_cc_value);

  switch (last_function)
    {
       case 1:
	 operand-=a_d_value;
	 break;
       case 2:
	 operand*=a_d_value;
	 break;
       case 3:
	 operand/=a_d_value;
	 break;
       case 0:
	 operand+=a_d_value;
	 break;
       default:
	 break;
    }

  last_function=2;
  clear_f = true;

  sprintf(c_cc_value,"%d",operand);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when divide button gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_di_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value;
  char c_cc_value[20];
  double a_d_value;
  a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
  a_d_value = atoi(a_cc_value);

  switch (last_function)
    {
       case 1:
	 operand-=a_d_value;
	 break;
       case 2:
	 operand*=a_d_value;
	 break;
       case 3:
	 operand/=a_d_value;
	 break;
       case 0:
	 operand+=a_d_value;
	 break;
       default:
	 break;
    }

  last_function=3;
  clear_f = true;

  sprintf(c_cc_value,"%d",operand);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}

/*!
 * \brief defines what happens when equals button gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_eq_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  const char *a_cc_value; 
  char c_cc_value[20]; 
  double a_d_value;
  a_cc_value = gtk_label_get_text(GTK_LABEL(gui_app->label_result));
  a_d_value = atoi(a_cc_value);

  switch (last_function)
    {
       case 1:
	 operand-=a_d_value;
	 break;
       case 2:
	 operand*=a_d_value;
	 break;
       case 3:
	 operand/=a_d_value;
	 break;
       case 0:
	 operand+=a_d_value;
	 break;
       default:
	 break;
    }

  last_function=4;
  clear_f = true;

  sprintf(c_cc_value,"%d",operand);

  gtk_label_set_text(GTK_LABEL(gui_app->label_result),c_cc_value);
}


/*!
 * \brief defines what happens when button exit gets clicked
 * \param p_wdgt pointer to the builder structure
 * \param p_data pointer to the builder data
 * \details For this function to work, the widget class must have pointers for all widgets that we want to modify from the code.
*/
extern "C" void button_exit_clicked(GtkWidget *p_wdgt, gpointer p_data )
{
  gtk_main_quit();

}

//********************************************************************
//********************************************************************
//
//   Main loop
//
//********************************************************************
//********************************************************************
/*!
 * \brief Main function to run program
 * \param argc int used to indicate the index of commands typed on command line
 * \param argv pointer for strings used on the command line
 * \details This function is built using Gtk+ for all GUI elements.
*/
int main(int argc, char **argv)
{

  GtkBuilder *builder; 
  GError *err = NULL; 

  // Now we initialize GTK+
  gtk_init(&argc, &argv);

  //create gtk_instance for visualization
  gui_app = g_slice_new(Gui_Window_AppWidgets);

  //builder
  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "calculator.glade", &err);

  //error handling
  if(err)
    {
      g_error(err->message);
      g_error_free(err);
      g_slice_free(Gui_Window_AppWidgets, gui_app);
      exit(-1);
    }

  // Obtain widgets that we need
  ObtainGuiWidgets(builder);

  // Connect signals
  gtk_builder_connect_signals(builder, gui_app);

  // Destroy builder now that we created the infrastructure
  g_object_unref(G_OBJECT(builder));

  //display the gui
  gtk_widget_show(GTK_WIDGET(gui_app->window1));

  //the main loop
  gtk_main();

  //destroy gui if it still exists
  if(gui_app)
    g_slice_free(Gui_Window_AppWidgets, gui_app);

  return 0;
}
