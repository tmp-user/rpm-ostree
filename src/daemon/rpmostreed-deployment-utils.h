/*
 * Copyright (C) 2015 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#pragma once

#include <ostree.h>

#include "rpmostreed-types.h"

char *          rpmostreed_deployment_generate_id (OstreeDeployment *deployment);

OstreeDeployment *
                rpmostreed_deployment_get_for_id (OstreeSysroot *sysroot,
                                                  const gchar *deploy_id);

char *          rpmostreed_deployment_get_refspec (OstreeDeployment *deployment);

GVariant *      rpmostreed_deployment_generate_blank_variant (void);

GVariant *      rpmostreed_deployment_generate_variant (OstreeDeployment *deployment,
                                                        OstreeRepo *repo);

gint            rpmostreed_rollback_deployment_index (const gchar *name,
                                                      OstreeSysroot *ot_sysroot,
                                                      GError **error);
