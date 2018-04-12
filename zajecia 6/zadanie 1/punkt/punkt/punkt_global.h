#ifndef PUNKT_GLOBAL_H
#define PUNKT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PUNKT_LIBRARY)
#  define PUNKTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PUNKTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PUNKT_GLOBAL_H
