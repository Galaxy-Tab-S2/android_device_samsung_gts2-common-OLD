/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#ifdef TRGT_BT_NAME_GTS28WIFI

	#define BTM_DEF_LOCAL_NAME "Samsung Galaxy Tab S2 8.0"

#elif TRGT_BT_NAME_GTS210WIFI

	#define BTM_DEF_LOCAL_NAME "Samsung Galaxy Tab S2 10.0"

#else

	#define BTM_DEF_LOCAL_NAME "Samsung Galaxy Tab S2 Exynos 5433"

#endif
 
#endif
