#ifndef PITCH_H
#define PITCH_H

#include "rover_3d.h"
#include <GL/glu.h>
#include <QWidget>
#include <GL/glut.h>
#include <QGLWidget>
#include <QtOpenGL>
#include <QtWidgets>
#include <boost/algorithm/string.hpp>
#include <sstream>
#include <fstream>


class pitch : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit pitch(QWidget *parent = 0);
    ~pitch();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();


private:
     float pitch_angle;
     void perspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
     void draw_pitch(float pitch_angle);
     const double RGB[3][60] = {
         { 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 0.933333, 0.866667, 0.800000, 0.733333, 0.666667, 0.600000, 0.533333, 0.466667, 0.400000, 0.333333, 0.266667, 0.200000, 0.133333, 0.066667, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 },
         { 0.000000, 0.066667, 0.133333, 0.200000, 0.266667, 0.333333, 0.400000, 0.466667, 0.533333, 0.600000, 0.666667, 0.733333, 0.800000, 0.866667, 0.933333, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 0.933333, 0.866667, 0.800000, 0.733333, 0.666667, 0.600000, 0.533333, 0.466667, 0.400000, 0.333333, 0.266667, 0.200000, 0.133333, 0.066667 },
         { 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.066667, 0.133333, 0.200000, 0.266667, 0.333333, 0.400000, 0.466667, 0.533333, 0.600000, 0.666667, 0.733333, 0.800000, 0.866667, 0.933333, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000, 1.000000 } };

signals:

public slots:
};

#endif // PITCH_H