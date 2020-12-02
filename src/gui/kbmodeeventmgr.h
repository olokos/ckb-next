#ifndef KBMODEEVENTMGR_H
#define KBMODEEVENTMGR_H

#include <QWidget>
#include <QDialog>
#include "kbwindowinfo.h"
#include <QTableWidgetItem>

namespace Ui {
class KbModeEventMgr;
}

class KbModeEventMgr : public QDialog
{
    Q_OBJECT

public:
    explicit KbModeEventMgr(QWidget* parent, KbMode* m);
    ~KbModeEventMgr();
    virtual void closeEvent(QCloseEvent* evt);


private slots:
    void on_cancelBtn_clicked();
    void on_okBtn_clicked();
    void on_clearbtn_clicked();
    void on_browseButton_clicked();

private:
    KbWindowInfo* info;
    Ui::KbModeEventMgr* ui;
    void handleClose();
};

#endif // KBMODEEVENTMGR_H
