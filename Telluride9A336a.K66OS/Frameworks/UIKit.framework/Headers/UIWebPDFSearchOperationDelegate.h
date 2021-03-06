/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@protocol UIWebPDFSearchOperationDelegate
- (void)search:(id)search hasPartialResults:(id)results;
- (void)searchDidBegin:(id)search;
- (void)searchDidFinish:(id)search;
- (void)searchDidTimeOut:(id)search;
- (void)searchLimitHit:(id)hit;
- (void)searchWasCancelled:(id)cancelled;
@end

