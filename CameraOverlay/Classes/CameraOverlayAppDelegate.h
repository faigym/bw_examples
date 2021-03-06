//
//  CameraOverlayAppDelegate.h
//  CameraOverlay
//
//  Created by Andreas Katzian on 12.05.10.
//  Copyright Blackwhale GmbH 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"

@interface CameraOverlayAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	MainViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MainViewController *viewController;

@end

