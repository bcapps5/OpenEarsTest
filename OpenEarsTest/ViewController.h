//
//  ViewController.h
//  OpenEarsTest
//
//  Created by Bryan Capps on 4/7/16.
//  Copyright © 2016 Bryan Capps. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <OpenEars/OEEventsObserver.h>


@interface ViewController : UIViewController <OEEventsObserverDelegate>

@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

