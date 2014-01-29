//
//  ViewController.h
//  addingbook
//
//  Created by BSA Univ15 on 27/01/14.
//  Copyright (c) 2014 BSA Univ15. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>
{
    UIDatePicker *datePick;
}
@property (weak, nonatomic) IBOutlet UITextField *bookTitleTextfield;
@property (weak, nonatomic) IBOutlet UITextField *authorTextfield;
@property (weak, nonatomic) IBOutlet UILabel *displayadded;
@property (retain, nonatomic) IBOutlet UITextField *totalPageTextfield;
@property (retain, nonatomic) IBOutlet UIDatePicker *datePick;
@property (weak, nonatomic) IBOutlet UIView *pickview;
@property (weak, nonatomic) IBOutlet UILabel *mandatoryDisplay1;
@property (weak, nonatomic) IBOutlet UILabel *mandatoryDisplay2;
@property (weak, nonatomic) IBOutlet UILabel *mandatoryDisplay4;
- (IBAction)startDate:(id)sender;
- (IBAction)done:(id)sender;
- (IBAction)hide:(id)sender;


- (IBAction)addbookAction:(id)sender;
@end
