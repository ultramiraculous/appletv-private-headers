/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"
#import "UIKit-Structs.h"


@protocol UIActivityItemSource <NSObject>
@optional
- (id)activityViewController:(id)controller dataTypeIdentifierForActivityType:(id)activityType;
@required
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;
@optional
- (id)activityViewController:(id)controller subjectForActivityType:(id)activityType;
- (id)activityViewController:(id)controller thumbnailImageForActivityType:(id)activityType suggestedSize:(CGSize)size;
@required
- (id)activityViewControllerPlaceholderItem:(id)item;
@end

