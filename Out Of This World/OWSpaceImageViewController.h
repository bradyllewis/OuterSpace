//
//  OWSpaceImageViewController.h
//  Out Of This World
//
//  Created by Brady Lewis on 5/14/14.
//
//

#import <UIKit/UIKit.h>
#import "OWObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWObject *spaceObject;

@end
