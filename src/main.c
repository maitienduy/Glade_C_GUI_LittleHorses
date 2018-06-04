#include <gtk/gtk.h>
#include <string.h>

GtkButton *start_button; 
GtkButton *toss_button;
GtkButton *exit_button;
GtkButton *click_button1; 
GtkButton *click_button2;
GtkButton *click_button3; 
GtkButton *click_button4;
GtkButton *click_button5; 
GtkButton *click_button6;
GtkButton *click_button7; 
GtkButton *click_button8;
GtkButton *click_button9; 
GtkButton *click_button10;
GtkButton *click_button11; 
GtkButton *click_button12;
GtkButton *click_button13; 
GtkButton *click_button14;
GtkButton *click_button15; 
GtkButton *click_button16;    
GtkButton *click_button17; 
GtkButton *click_button18;
GtkButton *click_button19; 
GtkButton *click_button20;
GtkButton *click_button21; 
GtkButton *click_button22;
GtkButton *click_button23; 
GtkButton *click_button24; 
GtkButton *click_button25;
GtkButton *click_button26; 
GtkButton *click_button27;
GtkButton *click_button28; 
GtkButton *click_button29;
GtkButton *click_button30; 
GtkButton *click_button31;
GtkButton *click_button32;
GtkButton *click_button33; 
GtkButton *click_button34;
GtkButton *click_button35; 
GtkButton *click_button36;
GtkButton *click_button37; 
GtkButton *click_button38;
GtkButton *click_button39;
GtkButton *click_button40; 
GtkButton *click_button41;
GtkButton *click_button42; 
GtkButton *click_button43;
GtkButton *click_button44; 
GtkButton *click_button45;
GtkButton *click_button46;
GtkButton *click_button47; 
GtkButton *click_button48;
GtkButton *click_button49; 
GtkButton *click_button50;
GtkButton *click_button51; 
GtkButton *click_button52;
GtkButton *click_button53;
GtkButton *click_button54; 
GtkButton *click_button55;
GtkButton *click_button56; 
GtkButton *click_button57;
GtkButton *click_button58; 
GtkButton *click_button59;
GtkButton *click_button60;
GtkButton *click_button61; 
GtkButton *click_button62;
GtkButton *click_button63; 
GtkButton *click_button64;
GtkButton *click_button65; 
GtkButton *click_button66;
GtkButton *click_button67;
GtkButton *click_button68; 
GtkButton *click_button69;
GtkButton *click_button70; 
GtkButton *click_button71;
GtkButton *click_button72; 
GtkButton *click_button73;
GtkButton *click_button74;
GtkButton *click_button75; 
GtkButton *click_button76;
       
int main(int argc, char *argv[])
{
	char buff[5];
    GtkWidget       *window;
    GtkBuilder      *builder;
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "glade/window_main.glade", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
	/*for(int i=1;i<73;i++){
		itoa(i, buff, 10);
		click_button[i] = GTK_BUTTON(gtk_builder_get_object(builder, buff));
	};*/
	click_button1 = GTK_BUTTON (gtk_builder_get_object (builder, "1"));
	click_button2 = GTK_BUTTON (gtk_builder_get_object (builder, "2"));
	click_button3 = GTK_BUTTON (gtk_builder_get_object (builder, "3"));
	click_button4 = GTK_BUTTON (gtk_builder_get_object (builder, "4"));
	click_button5 = GTK_BUTTON (gtk_builder_get_object (builder, "5"));
	click_button6 = GTK_BUTTON (gtk_builder_get_object (builder, "6"));
	click_button7 = GTK_BUTTON (gtk_builder_get_object (builder, "7"));
	click_button8 = GTK_BUTTON (gtk_builder_get_object (builder, "8"));
	click_button9 = GTK_BUTTON (gtk_builder_get_object (builder, "9"));
	click_button10 = GTK_BUTTON (gtk_builder_get_object (builder, "10"));
	click_button11 = GTK_BUTTON (gtk_builder_get_object (builder, "11"));
	click_button12 = GTK_BUTTON (gtk_builder_get_object (builder, "12"));
	click_button13 = GTK_BUTTON (gtk_builder_get_object (builder, "13"));
	click_button14 = GTK_BUTTON (gtk_builder_get_object (builder, "14"));
	click_button15 = GTK_BUTTON (gtk_builder_get_object (builder, "15"));
	click_button16 = GTK_BUTTON (gtk_builder_get_object (builder, "16"));
	click_button17 = GTK_BUTTON (gtk_builder_get_object (builder, "17"));
	click_button18 = GTK_BUTTON (gtk_builder_get_object (builder, "18"));
	click_button19 = GTK_BUTTON (gtk_builder_get_object (builder, "19"));
	click_button20 = GTK_BUTTON (gtk_builder_get_object (builder, "20"));
	click_button21 = GTK_BUTTON (gtk_builder_get_object (builder, "21"));
	click_button22 = GTK_BUTTON (gtk_builder_get_object (builder, "22"));
	click_button23 = GTK_BUTTON (gtk_builder_get_object (builder, "23"));
	click_button24 = GTK_BUTTON (gtk_builder_get_object (builder, "24"));
	click_button25 = GTK_BUTTON (gtk_builder_get_object (builder, "25"));
	click_button26 = GTK_BUTTON (gtk_builder_get_object (builder, "26"));
	click_button27 = GTK_BUTTON (gtk_builder_get_object (builder, "27"));
	click_button28 = GTK_BUTTON (gtk_builder_get_object (builder, "28"));
	click_button29 = GTK_BUTTON (gtk_builder_get_object (builder, "29"));
	click_button30 = GTK_BUTTON (gtk_builder_get_object (builder, "30"));
	click_button31 = GTK_BUTTON (gtk_builder_get_object (builder, "31"));
	click_button32 = GTK_BUTTON (gtk_builder_get_object (builder, "32"));
	click_button33 = GTK_BUTTON (gtk_builder_get_object (builder, "33"));
	click_button34 = GTK_BUTTON (gtk_builder_get_object (builder, "34"));
	click_button35 = GTK_BUTTON (gtk_builder_get_object (builder, "35"));
	click_button36 = GTK_BUTTON (gtk_builder_get_object (builder, "36"));
	click_button37 = GTK_BUTTON (gtk_builder_get_object (builder, "37"));
	click_button38 = GTK_BUTTON (gtk_builder_get_object (builder, "38"));
	click_button39 = GTK_BUTTON (gtk_builder_get_object (builder, "39"));
	click_button40 = GTK_BUTTON (gtk_builder_get_object (builder, "40"));
	click_button41 = GTK_BUTTON (gtk_builder_get_object (builder, "41"));
	click_button42 = GTK_BUTTON (gtk_builder_get_object (builder, "42"));
	click_button43 = GTK_BUTTON (gtk_builder_get_object (builder, "43"));
	click_button44 = GTK_BUTTON (gtk_builder_get_object (builder, "44"));
	click_button45 = GTK_BUTTON (gtk_builder_get_object (builder, "45"));
	click_button46 = GTK_BUTTON (gtk_builder_get_object (builder, "46"));
	click_button47 = GTK_BUTTON (gtk_builder_get_object (builder, "47"));
	click_button48 = GTK_BUTTON (gtk_builder_get_object (builder, "48"));
	click_button49 = GTK_BUTTON (gtk_builder_get_object (builder, "49"));
	click_button50 = GTK_BUTTON (gtk_builder_get_object (builder, "50"));
	click_button51 = GTK_BUTTON (gtk_builder_get_object (builder, "51"));
	click_button52 = GTK_BUTTON (gtk_builder_get_object (builder, "52"));
	click_button53 = GTK_BUTTON (gtk_builder_get_object (builder, "53"));
	click_button54 = GTK_BUTTON (gtk_builder_get_object (builder, "54"));
	click_button55 = GTK_BUTTON (gtk_builder_get_object (builder, "55"));
	click_button56 = GTK_BUTTON (gtk_builder_get_object (builder, "56"));
	click_button57 = GTK_BUTTON (gtk_builder_get_object (builder, "57"));
	click_button58 = GTK_BUTTON (gtk_builder_get_object (builder, "58"));
	click_button59 = GTK_BUTTON (gtk_builder_get_object (builder, "59"));
	click_button60 = GTK_BUTTON (gtk_builder_get_object (builder, "60"));
	click_button61 = GTK_BUTTON (gtk_builder_get_object (builder, "61"));
	click_button62 = GTK_BUTTON (gtk_builder_get_object (builder, "62"));
	click_button63 = GTK_BUTTON (gtk_builder_get_object (builder, "63"));
	click_button64 = GTK_BUTTON (gtk_builder_get_object (builder, "64"));
	click_button65 = GTK_BUTTON (gtk_builder_get_object (builder, "65"));
	click_button66 = GTK_BUTTON (gtk_builder_get_object (builder, "66"));
	click_button67 = GTK_BUTTON (gtk_builder_get_object (builder, "67"));
	click_button68 = GTK_BUTTON (gtk_builder_get_object (builder, "68"));
	click_button69 = GTK_BUTTON (gtk_builder_get_object (builder, "69"));
	click_button70 = GTK_BUTTON (gtk_builder_get_object (builder, "70"));
	click_button71 = GTK_BUTTON (gtk_builder_get_object (builder, "71"));
	click_button72 = GTK_BUTTON (gtk_builder_get_object (builder, "72"));
	click_button73 = GTK_BUTTON (gtk_builder_get_object (builder, "73"));
	click_button74 = GTK_BUTTON (gtk_builder_get_object (builder, "74"));
	click_button75 = GTK_BUTTON (gtk_builder_get_object (builder, "75"));
	click_button76 = GTK_BUTTON (gtk_builder_get_object (builder, "76"));
	start_button = GTK_BUTTON (gtk_builder_get_object (builder, "Start"));
	toss_button = GTK_BUTTON (gtk_builder_get_object (builder, "Toss"));
	exit_button = GTK_BUTTON (gtk_builder_get_object (builder, "Exit"));


    gtk_builder_connect_signals(builder, NULL);
 
    g_object_unref(builder);
 
    gtk_widget_show(window);                
    gtk_main();
 
    return 0;
}
 
 static const gchar *get_image_path_from_name(const gchar *name)
{
        gint length;
        gchar *path;

        static const gchar *path_default = "glade/";

        static gint path_default_length = 26;

        length = path_default_length + strlen(name) + 1;
        path   = g_malloc(sizeof(char) * length);

        strcpy(path, path_default);
        strcat(path, name);

        return path;
}

void on_1_clicked(GtkWidget *click_button1,
                     gpointer   user_data)
{
    //gtk_button_set_label (click_button1, NULL);
    const gchar *imagepath;
    imagepath  = get_image_path_from_name("redPiece.png");
    GtkWidget *image = gtk_image_new_from_file (imagepath);
    gtk_button_set_image (click_button1, image);
}
void on_2_clicked(GtkWidget *click_button2,
                     gpointer   user_data)
{
    //gtk_button_set_label (click_button2, NULL);
    const gchar *imagepath;
    imagepath  = get_image_path_from_name("redPiece.png");
    GtkWidget *image = gtk_image_new_from_file (imagepath);
    gtk_button_set_image (click_button2, image);
}
void on_3_clicked(GtkWidget *click_button1,
                     gpointer   user_data)
{
    gtk_button_set_image (click_button2,NULL); //remove horse from tile
    
}

// called when window is closed
void on_window_main_destroy()
{
    gtk_main_quit();
}
