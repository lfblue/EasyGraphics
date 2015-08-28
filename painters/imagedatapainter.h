#ifndef IMAGEDATAPAINTER_H
#define IMAGEDATAPAINTER_H

#include <QObject>
#include "modelmanager.h"
#include <QImage>
#include <QColor>

class ImageDataPainter : public QObject
{
    Q_OBJECT
public:
    explicit ImageDataPainter(QImage *img,ModelManager *mgr,QObject *parent = 0);

    bool draw();

    bool drawLine(QVector3D stPoint,QVector3D endPoint,const QColor &color);

signals:

public slots:

private:
    QImage *m_image;
    ModelManager *m_model;
};

#endif // IMAGEDATAPAINTER_H