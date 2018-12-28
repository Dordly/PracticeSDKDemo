# PracticeSDKDemo

### 关于OC版SDK的创建过程
#### 一、打开Xcode->File->New->Workspace,创建SDK名称
![avatar](https://pan.baidu.com/s/1F5EiJQZaUwAZKLycdogTGA)
![avatar](https://pan.baidu.com/s/1Jj-7uka3XL2XwDVMtcD8hg)
#### 二、打开所创建的SDK名称的".xcworkspace"
![avatar](https://pan.baidu.com/s/1qrHUWMdC6mD8hhzTBoeZJQ)
![avatar](https://pan.baidu.com/s/1qzHr7g0Ec6-BxZYFRJ66lg)

![avatar](https://pan.baidu.com/s/1qXshXRklv9l1h7TCi1FwaA)
![avatar](https://pan.baidu.com/s/1H3Gkztc7VrglOF4l3wbZlQ)


![avatar](https://pan.baidu.com/s/1ERFFBEptZM33cpZE4jBvIg)
![avatar](https://pan.baidu.com/s/1mOQ3K9XPFfNmEZR_FDYOoQ)

![avatar](https://pan.baidu.com/s/1HocZlRqlEAslIfObjIs_SQ)
![avatar](https://pan.baidu.com/s/1gxdkg9CFS3dvBAu6tPwEbA)


![avatar](https://pan.baidu.com/s/1n5mZecQN3Epm2ty1lepKKg)
![avatar](https://pan.baidu.com/s/1yp0vXQHtuTDj8jIWUREZ1w)
#### 三、添加脚本信息
![avatar](https://pan.baidu.com/s/1Gm8JFHUrLL7UmGQ_-UkiGw)
![avatar](https://pan.baidu.com/s/1P_4UFwyzF0OIj1MzhniL0A)

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