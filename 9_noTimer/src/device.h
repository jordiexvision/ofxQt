#pragma once

#include "ofMain.h"

#include "ofApp.h"
#include "QtGLWidget.h"
#include "ui_device.h"

// include Qt always at the end or face glew error
#include <QWidget>
#include <QOpenGLWidget>
#include <QHBoxLayout>
#include <QTimer>
#include <QThread>

class device : public QWidget
{
	Q_OBJECT

public:
	device( QWidget *parent = Q_NULLPTR);
	~device();

	QHBoxLayout *layout;
	
	shared_ptr<ofApp> ofAppPtr;
	shared_ptr<ofAppQtWindow> windowPtr;



	void changeEvent(QEvent *e);

private:
	Ui::device ui;

public slots:
	void on_Size_slider_sliderMoved(int value);
};
