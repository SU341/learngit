#include <QFileDialog>
#include <QGraphicsItem>
#include <QPainter>
#include <QWheelEvent>
#include "UI/Common/LoadingDialog.h"
#include "Common.h"
#include <qmath.h>
#include <QPolygon>
#include <QScrollBar>
#include <thread>

ModelingGraphicsView::ModelingGraphicsView(QWidget *parent):
    QGraphicsView(parent),
    m_scrolling(false)
{

    //	反锯齿
    setRenderHints(QPainter::Antialiasing);
    //	隐藏滚动条
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

