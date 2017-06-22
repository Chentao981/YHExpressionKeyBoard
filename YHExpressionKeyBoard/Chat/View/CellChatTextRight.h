//
//  CellChatRight.h
//  samuelandkevin github:https://github.com/samuelandkevin/YHChat
//
//  Created by samuelandkevin on 17/2/17.
//  Copyright © 2017年 samuelandkevin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellChatBase.h"


@class CellChatTextRight;
@protocol CellChatTextRightDelegate <NSObject>

@end

@interface CellChatTextRight : CellChatBase

@property (nonatomic,weak)id<CellChatTextRightDelegate>delegate;

@end
