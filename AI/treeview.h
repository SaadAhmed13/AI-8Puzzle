#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QWidget>

namespace Ui {
class TreeView;
}

class TreeView : public QWidget
{
    Q_OBJECT

public:
    explicit TreeView(QWidget *parent = 0);
    ~TreeView();

private:
    Ui::TreeView *ui;
};

#endif // TREEVIEW_H
