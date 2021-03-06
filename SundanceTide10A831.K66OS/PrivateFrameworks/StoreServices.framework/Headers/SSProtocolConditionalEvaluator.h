/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {
	SSProtocolConditionalContext *_context;	// 4 = 0x4
	NSDictionary *_dictionary;	// 8 = 0x8
}
+ (id)defaultConditionalContext;	// 0x3781e50d
+ (void)setDefaultConditionalContext:(id)context;	// 0x3781e551
- (id)init;	// 0x3781e409
- (id)initWithDictionary:(id)dictionary;	// 0x3781e41d
- (id)initWithDictionary:(id)dictionary conditionalContext:(id)context;	// 0x3781e431
- (id)_arrayByEvaluatingChildrenOfArray:(id)array withForcedValue:(int)forcedValue;	// 0x3781e5cd
- (BOOL)_checkConditions:(id)conditions withOperator:(id)anOperator;	// 0x3781e73d
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x3781e8dd
- (id)_dictionaryByEvaluatingDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x3781ea69
- (id)_dictionaryByEvaluatingWithForcedValue:(int)forcedValue;	// 0x3781eafd
- (int)_logicalOperatorForString:(id)string;	// 0x3781eca1
- (void)dealloc;	// 0x3781e4a9
- (id)dictionaryByEvaluatingConditions;	// 0x3781e5a5
- (id)dictionaryByRemovingConditions;	// 0x3781e5b9
@end

