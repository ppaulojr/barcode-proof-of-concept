//
//  ViewController.h
//  barcode-proof-of-concept
//
//  Created by Pedro Paulo Oliveira Junior on 20/03/15.
//  Copyright (c) 2015 speedcomm. All rights reserved.
//

#import <UIKit/UIKit.h>
@import AVFoundation;

@interface ViewController : UIViewController<UIAlertViewDelegate, AVCaptureMetadataOutputObjectsDelegate>
@property (strong, nonatomic) NSMutableArray * allowedBarcodeTypes;


@end

