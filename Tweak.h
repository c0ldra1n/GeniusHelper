//
//  Header.h
//  GeniusHelper
//
//  Created by c0ldra1n on 2/26/17.
//  Copyright © 2017 c0ldra1n. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <substrate.h>
#import <xctheos.h>
#import <libobjcipc/libobjcipc.h>

@interface SLKTextView : UITextView

@end

@interface SLKTextInputbar : UIToolbar

@property (nonatomic, readonly, strong) SLKTextView *textView;



@end

@interface SLKTextViewController : UIViewController

@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, readonly) SLKTextInputbar *textInputbar;

- (void)didPressLeftButton:(id)sender;
- (void)didPressRightButton:(id)sender;

@end


@interface DCDMessageViewController : SLKTextViewController


/**
 Custom Property.
 */
@property (nonatomic, retain) UIGestureRecognizer *leftButtonGesture;



/**
 Custom Method to apply customization
 */
-(void)applyCustomLeftButtonAction;

/**
 Custom Method to show the confirm tweak list action.
 */
-(void)displaySendTweakListView;

-(NSString *)dpkgList;


/**
 Custom Method to post a text on Ghostbin

 @param text text to post
 */
-(void)postGhostBinText:(NSString *)text completion:(void(^)(NSURL *ghostbinURL))completion;

-(void)GHShowWelcome;

@end



@interface SpringBoard : UIApplication <UIApplicationDelegate>

@end
