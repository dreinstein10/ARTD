/*******************************************************
 *
 * Author: Hirokazu Kato
 *
 *         kato@sys.im.hiroshima-cu.ac.jp
 *
 * Revision: 1.0
 * Date: 2002/01/01
 *
*******************************************************/
#ifndef AR_VIDEO_LINUX_1394CAM_H
#define AR_VIDEO_LINUX_1394CAM_H
#ifdef  __cplusplus
extern "C" {
#endif

#include <AR/config.h>
#include <AR/ar.h>

#include <stdlib.h>
#include <linux/types.h>
#include <linux/videodev.h>
#include <libraw1394/raw1394.h>
#include <dc1394/control.h>
#include <dc1394/dc1394.h>
#include <dc1394/camera.h>
#include <dc1394/capture.h>
#include <dc1394/types.h>
#include <dc1394/linux/capture.h>
#include <dc1394/linux/control.h>
#include <dc1394/utils.h>
typedef struct {
    int      node;
    int      mode;
    int      rate;
    int      debug;  
    int      card;
    int      channel;
    int      speed;
    int      format;
    int      dma_buf_num;
    int      int_mode;
    int      int_rate;
    int      status;

    int                    internal_id;
    dc1394featureset_t     features;
    dc1394camera_t   camera;
    ARUint8                *image;
} AR2VideoParamT;

#ifdef  __cplusplus
}
#endif
#endif
