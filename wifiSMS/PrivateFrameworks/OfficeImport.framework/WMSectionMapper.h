/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDSection;



@interface WMSectionMapper : CMMapper 
{
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    BOOL mBreakAtStart;
    BOOL mBreakAtEnd;
    BOOL mIsTitlePage;
}

+ (BOOL)isContentEmpty:(id)arg1;

- (id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4;
- (void)MapSectionStyleAt:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;

@end
