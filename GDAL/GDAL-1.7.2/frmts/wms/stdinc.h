#include <math.h>
#include <vector>
#include <list>
#include <curl/curl.h>
#include <gdal.h>
#include <gdalwarper.h>
#include <gdal_alg.h>
#include <ogr_srs_api.h>
#include <ogr_spatialref.h>
#include <cpl_string.h>
#include <gdal_priv.h>
#include <gdal_pam.h>
#include <cpl_multiproc.h>

#include "md5.h"
#include "gdalhttp.h"
#include "wmsdriver.h"
#include "minidriver_wms.h"
#include "minidriver_tileservice.h"
#include "minidriver_worldwind.h"
#include "minidriver_tms.h"
