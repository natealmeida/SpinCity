//
//  DetailViewController.h
//  SpinCity
//
//  Created by Nate Almeida on 2/23/14.
//  Copyright (c) 2014 Nate Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
