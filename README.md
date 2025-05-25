# Style Transfer Desktop Application

Desktop application with style transfer function using AdaIN model [(source code)](https://github.com/irasin/Pytorch_AdaIN)

Initially a [Telegram bot](https://github.com/ayzee7/style-transfer), reworked for standalone use.

### Setup

Download [latest release](https://github.com/ayzee7/style-transfer-desktop/releases) and extract the archieve.

### Usage

- Specify an image on your hard drive you want to use the content from by selecting **Load Content Image** option.
- Specify an image you want to use as a style reference.
	- You can either use your own image by selecting **Load Style Image** option
	- or select one of the presets by choosing **Select Style Preset** option.
- Specify the location for the rendered picture by choosing **Select Output Location** option.
	- The default location is the same as the location of the program executable.
- Specify style transfer grade (defines how much of the style image is transfered onto content image).
- Press **Generate** to render the image.

> Note: the render time may strongly depend on your system configuration. It is recommended to use hardware acceleration with CUDA support.

