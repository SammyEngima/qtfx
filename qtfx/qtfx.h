#pragma once

#include <QWidget>

QWidget* createVBoxWidget( QWidget* parent, int margin = 4, int spacing = 4 );
QWidget* createHBoxWidget( QWidget* parent, int margin = 4, int spacing = 4 );
QFont getMonospaceFont( int pointSize = -1, int weight = -1 );
