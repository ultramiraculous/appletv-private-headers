/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASRecurrence.h"
#import "NSCoding.h"

@class NSNumber, NSDate, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
	ASToDo *_parentToDo;	// 84 = 0x54
	NSDate *_startTime;	// 88 = 0x58
	NSNumber *_regenerate;	// 92 = 0x5c
	NSNumber *_deadOccur;	// 96 = 0x60
}
@property(retain) NSNumber *deadOccur;	// G=0x322747c5; S=0x322747d9; @synthesize=_deadOccur
@property(retain) NSNumber *regenerate;	// G=0x322747a1; S=0x322747b5; @synthesize=_regenerate
@property(retain) NSDate *startTime;	// G=0x3227477d; S=0x32274791; @synthesize=_startTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x322731a1
+ (id)asParseRules;	// 0x3227352d
+ (BOOL)frontingBasicTypes;	// 0x3227329d
+ (BOOL)notifyOfUnknownTokens;	// 0x322732f1
+ (BOOL)parsingLeafNode;	// 0x322731f5
+ (BOOL)parsingWithSubItems;	// 0x32273249
- (id)initWithCalRecurrence:(void *)calRecurrence parentToDo:(id)aDo;	// 0x32273345
- (id)initWithCoder:(id)coder;	// 0x322744fd
- (BOOL)_requiresParentEvent;	// 0x32273c4d
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x32274375
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x32274255
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x32273e4d
// declared property getter: - (id)deadOccur;	// 0x322747c5
- (void)dealloc;	// 0x32274485
- (void)encodeWithCoder:(id)coder;	// 0x32274651
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32273c51
// declared property getter: - (id)regenerate;	// 0x322747a1
- (void)saveToCalendarWithParentASToDo:(id)aDo existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x32273459
// declared property setter: - (void)setDeadOccur:(id)occur;	// 0x322747d9
// declared property setter: - (void)setRegenerate:(id)regenerate;	// 0x322747b5
// declared property setter: - (void)setStartTime:(id)time;	// 0x32274791
- (void)setStartTimeString:(id)string;	// 0x322741dd
- (void)setUntilString:(id)string;	// 0x32274219
// declared property getter: - (id)startTime;	// 0x3227477d
@end

