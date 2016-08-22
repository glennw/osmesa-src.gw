/**************************************************************************
 * 
 * Copyright 2003 VMware, Inc.
 * All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 **************************************************************************/

 /*
  * Authors:
  *   Keith Whitwell <keithw@vmware.com>
  */
    

#ifndef ST_ATOM_H
#define ST_ATOM_H

#include "main/glheader.h"

#include "state_tracker/st_api.h"
#include "state_tracker/st_context.h"

struct st_context;
struct st_tracked_state;

void st_init_atoms( struct st_context *st );
void st_destroy_atoms( struct st_context *st );


void st_validate_state( struct st_context *st, enum st_pipeline pipeline );


extern const struct st_tracked_state st_update_array;
extern const struct st_tracked_state st_update_framebuffer;
extern const struct st_tracked_state st_update_clip;
extern const struct st_tracked_state st_update_depth_stencil_alpha;
extern const struct st_tracked_state st_update_fp;
extern const struct st_tracked_state st_update_gp;
extern const struct st_tracked_state st_update_tep;
extern const struct st_tracked_state st_update_tcp;
extern const struct st_tracked_state st_update_vp;
extern const struct st_tracked_state st_update_cp;
extern const struct st_tracked_state st_update_rasterizer;
extern const struct st_tracked_state st_update_polygon_stipple;
extern const struct st_tracked_state st_update_viewport;
extern const struct st_tracked_state st_update_scissor;
extern const struct st_tracked_state st_update_blend;
extern const struct st_tracked_state st_update_msaa;
extern const struct st_tracked_state st_update_sample_shading;
extern const struct st_tracked_state st_update_sampler;
extern const struct st_tracked_state st_update_fragment_texture;
extern const struct st_tracked_state st_update_vertex_texture;
extern const struct st_tracked_state st_update_geometry_texture;
extern const struct st_tracked_state st_update_tessctrl_texture;
extern const struct st_tracked_state st_update_tesseval_texture;
extern const struct st_tracked_state st_update_compute_texture;
extern const struct st_tracked_state st_update_fs_constants;
extern const struct st_tracked_state st_update_gs_constants;
extern const struct st_tracked_state st_update_tes_constants;
extern const struct st_tracked_state st_update_tcs_constants;
extern const struct st_tracked_state st_update_vs_constants;
extern const struct st_tracked_state st_update_cs_constants;
extern const struct st_tracked_state st_bind_fs_ubos;
extern const struct st_tracked_state st_bind_vs_ubos;
extern const struct st_tracked_state st_bind_gs_ubos;
extern const struct st_tracked_state st_bind_tcs_ubos;
extern const struct st_tracked_state st_bind_tes_ubos;
extern const struct st_tracked_state st_bind_cs_ubos;
extern const struct st_tracked_state st_bind_fs_atomics;
extern const struct st_tracked_state st_bind_vs_atomics;
extern const struct st_tracked_state st_bind_gs_atomics;
extern const struct st_tracked_state st_bind_tcs_atomics;
extern const struct st_tracked_state st_bind_tes_atomics;
extern const struct st_tracked_state st_bind_cs_atomics;
extern const struct st_tracked_state st_bind_fs_ssbos;
extern const struct st_tracked_state st_bind_vs_ssbos;
extern const struct st_tracked_state st_bind_gs_ssbos;
extern const struct st_tracked_state st_bind_tcs_ssbos;
extern const struct st_tracked_state st_bind_tes_ssbos;
extern const struct st_tracked_state st_bind_cs_ssbos;
extern const struct st_tracked_state st_bind_fs_images;
extern const struct st_tracked_state st_bind_vs_images;
extern const struct st_tracked_state st_bind_gs_images;
extern const struct st_tracked_state st_bind_tcs_images;
extern const struct st_tracked_state st_bind_tes_images;
extern const struct st_tracked_state st_bind_cs_images;
extern const struct st_tracked_state st_update_pixel_transfer;
extern const struct st_tracked_state st_update_tess;


GLuint st_compare_func_to_pipe(GLenum func);

enum pipe_format
st_pipe_vertex_format(GLenum type, GLuint size, GLenum format,
                      GLboolean normalized, GLboolean integer);

#endif
