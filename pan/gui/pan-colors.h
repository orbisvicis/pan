/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * Pan - A Newsreader for Gtk+
 * Copyright (C) 2002-2006  Charles Kerr <charles@rebelbase.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _PanColors_h_
#define _PanColors_h_

#include <config.h>
#include "gtk-compat.h"
#include <pan/general/singleton-template.h>

class PanColors : public PanSingleton< PanColors >
{
  public:
    std::string def_fg;
    std::string def_bg;
    GdkColor def_fg_col;
    GdkColor def_bg_col;

    PanColors(std::string& fg, std::string& bg, GdkColor& fg_col, GdkColor& bg_col) :
          def_fg (fg), def_bg(bg), def_fg_col(fg_col), def_bg_col(bg_col) // {}
          {
            if (!def_fg.empty()) std::cerr<<def_fg<<" "<<def_bg<<"\n";
          }
    PanColors() {}
    virtual ~PanColors() {}
};

#endif
