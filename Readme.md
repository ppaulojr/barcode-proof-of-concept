# Proof of concept of the barcode reader

It uses only native iOS libraries and it works on iOS 7+

## Dependencies

Not so far

## Implementation

Here’s a quick rundown of the instance variables (via 'iOS 7 By Tutorials'):

1. _captureSession – `AVCaptureSession` is the core media handling class in `AVFoundation`. It talks to the hardware to retrieve, process, and output video. A capture session wires together inputs and outputs, and controls the format and resolution of the output frames.

2. _videoDevice – `AVCaptureDevice` encapsulates the physical camera on a device. Modern iPhones have both front and rear cameras, while other devices may only have a single camera.

3. _videoInput – To add an AVCaptureDevice to a session, wrap it in an `AVCaptureDeviceInput`. A capture session can have multiple inputs and multiple outputs.

4. _previewLayer – `AVCaptureVideoPreviewLayer` provides a mechanism for displaying the current frames flowing through a capture session; it allows you to display the camera output in your UI.
5. _running – This holds the state of the session; either the session is running or it’s not.
6. _metadataOutput - `AVCaptureMetadataOutput` provides a callback to the application when metadata is detected in a video frame. AV Foundation supports two types of metadata: machine readable codes and face detection.
7. _backgroundQueue - Used for showing alert using a separate thread.

## Todo

- Add Lights on/off
- Front Camera/Rear Camera