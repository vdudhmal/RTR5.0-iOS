//
//  MyView.h
//  OpenGLES
//
//  Created by V D on 04/08/2024.
//

#import <UIKit/UIKit.h>

@interface RenderToTexture : UIView <UIGestureRecognizerDelegate>
- (void)startDisplayLink;
- (void)stopDisplayLink;
@end
