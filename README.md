# PracticeSDKDemo

### 关于OC版SDK的创建过程
#### 一、打开Xcode->File->New->Workspace,创建SDK名称
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-b26fbfa893e9e53a.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-a7cc5ffdb5f7ebc6.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
#### 二、打开所创建的SDK名称的".xcworkspace"
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-6e27c6ebc3aa5b7c.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-dc5a3cc91e7a6170.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-44d97864e795d358.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-ba30f060ba47ffb1.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-5ddcf654bb9b2215.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-3729a4391f3c4520.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-2654f32d70f84752.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-bf420eda9e0b0c83.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-97f5c9d3f35f226d.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-cebae2dd394e9a89.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
#### 三、添加脚本信息
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-4651929a9f403f92.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
![IMG_1688.PNG](https://upload-images.jianshu.io/upload_images/1761877-599f0a80cc927359.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

```
if [ "${ACTION}" = "build" ]

then

INSTALL_DIR=${SRCROOT}/Products/${PROJECT_NAME}.framework

DEVICE_DIR=${BUILD_ROOT}/${CONFIGURATION}-iphoneos/${PROJECT_NAME}.framework

SIMULATOR_DIR=${BUILD_ROOT}/${CONFIGURATION}-iphonesimulator/${PROJECT_NAME}.framework

if [ -d "${INSTALL_DIR}" ]

then

rm -rf "${INSTALL_DIR}"

fi

mkdir -p "${INSTALL_DIR}"

cp -R "${DEVICE_DIR}/" "${INSTALL_DIR}/"

#ditto "${DEVICE_DIR}/Headers" "${INSTALL_DIR}/Headers"

lipo -create "${DEVICE_DIR}/${PROJECT_NAME}" "${SIMULATOR_DIR}/${PROJECT_NAME}" -output "${INSTALL_DIR}/${PROJECT_NAME}"

#open "${DEVICE_DIR}"

open "${SRCROOT}/Products"

fi


```