#include "qtfx.h"

#include "QBoxLayout"
#include "QLabel"
#include <QFont>

QWidget* createVBoxWidget( QWidget* parent, int margin, int spacing )
{
	QWidget* w = new QWidget( parent );
	QVBoxLayout* l = new QVBoxLayout;
	l->setContentsMargins( margin, margin, margin, margin );
	l->setSpacing( spacing );
	l->addWidget( w );
	return w;
}

QWidget* createHBoxWidget( QWidget* parent, int margin, int spacing )
{
	QWidget* w = new QWidget( parent );
	QHBoxLayout* l = new QHBoxLayout;
	l->setContentsMargins( margin, margin, margin, margin );
	l->setSpacing( spacing );
	l->addWidget( w );
	return w;
}

QFont getMonospaceFont( int pointSize, int weight )
{
#ifdef _MSC_VER
	return QFont( "Consolas", pointSize, weight );
#elif __APPLE__
	return QFont( "Menlo", 4 * pointSize / 3, weight );
#else
	return QFont( "Consolas", pointSize, weight );
#endif
}