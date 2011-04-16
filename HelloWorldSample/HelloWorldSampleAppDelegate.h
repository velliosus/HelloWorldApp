//
//  HelloWorldSampleAppDelegate.h
//  HelloWorldSample
//
//  Created by Andrew Ferguson on 4/16/11.
//  Copyright 2011 Sante Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldSampleViewController;

@interface HelloWorldSampleAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet HelloWorldSampleViewController *viewController;

@end
