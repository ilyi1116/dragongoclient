//
//  TextCell.h
//  DGSPhone
//
//  Created by Justin Weiss on 6/28/10.
//  Copyright 2010 Justin Weiss. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TextCell;

@interface TextCell : UITableViewCell <UITextFieldDelegate> {
	IBOutlet UILabel *label;
	IBOutlet UITextField *textField;
	IBOutlet UIView *content;
	SEL textEditedSelector;
	void (^onChanged)(TextCell *textCell);
}

@property(nonatomic, retain) IBOutlet UILabel *label;
@property(nonatomic, retain) IBOutlet UITextField *textField;
@property(nonatomic) SEL textEditedSelector;
@property(nonatomic, retain) IBOutlet UIView *content;
@property(nonatomic, copy) void (^onChanged)(TextCell *textCell);

- (id)init;

@end
