/*
    Copyright (C) 2010  Collabora Multimedia.
      @author Mauricio Piacentini <mauricio.piacentini@collabora.co.uk>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGST_OBJECTSTORE_H
#define QGST_OBJECTSTORE_H

/* WARNING: This header should only be included from
 * QtGStreamer source files and should not be installed */

namespace QGst {
namespace Private {

class ObjectStore
{
public:
    static bool put(const void * ptr);
    static bool take(const void * ptr);
    static bool isEmpty();
};

}
} //namespace QGst

#endif
