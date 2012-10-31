//
//  TaxiNowMainViewController.h
//  TaxiNow
//
//  Created by BRIAN MURPHY on 10/1/12.
//  Copyright (c) 2012 MurphWare. All rights reserved.
//

#import "TaxiNowFlipsideViewController.h"
#import "LocationController.h"

@interface TaxiNowMainViewController : UIViewController <TaxiNowFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

// This is the callTaxi button interface
- (IBAction)callTaxi:(UIButton *)sender;

// This is the text label output interface
//@property (weak, nonatomic) IBOutlet UILabel *latitude;
@property (weak, nonatomic) IBOutlet UILabel *coordinates;

@property (strong, nonatomic) LocationController *locationController;

@end

