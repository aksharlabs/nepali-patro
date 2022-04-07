#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>
#include <DAboutDialog>
#include <DMainWindow>


DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
        DApplication a(argc, argv);
    DAboutDialog dialog;
    a.loadTranslator();
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    //application name and product name here
    a.setApplicationName("nepali-calendar");
    a.setProductName("नेपाली पात्रो");
    a.setAboutDialog(&dialog);

    //about page title  and app name with inline style.these are for sample. without style(default) text is black.//

    dialog.setWindowTitle("<span style=' font-size:12pt; font-weight:800;'>नेपाली पात्रो</span>");

    dialog.setProductName("<span style=' font-weight:bold;'>nepali </span>"
                          "<span style='font-weight:bold;'>calendar</span>"
                           "<span style='font-weight:bold;'>(नेपाली पात्रो)</span>");
    //application version

   dialog.setVersion(DApplication::buildVersion("Version 1"));
    //application logo

    dialog.setProductIcon(QIcon(":/images/cal-logo.png"));

    //Organization logo if aplicable.


    dialog.setCompanyLogo(QPixmap(":/images/logo-small.png"));


   //about
   dialog.setDescription(
           "<span style='font-weight:600;'>calendar for nepali bikram sambat date system </span>");

   dialog.setWebsiteName("<span style=' color:#a9a9a9; font-size:8pt; font-weight:600;'>source code on github</span><br>"
           "<span style=' font-size:8pt; font-weight:600;'></span>");
   dialog.setWebsiteLink("https://github.com/aksharlabs/nepali-patro");


   MainWindow w;
   w.show();

   Dtk::Widget::moveToCenter(&w);
   return a.exec();
}
