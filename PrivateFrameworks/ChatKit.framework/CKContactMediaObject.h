/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {
    ABVCardRecord *_vCard;
    UIImage *_vCardImage;
}

@property(retain) ABVCardRecord * vCard;
@property(retain) UIImage * vCardImage;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;

- (struct CGSize { double x1; double x2; })bbSize;
- (Class)coloredBalloonViewClass;
- (void)dealloc;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)icon;
- (int)mediaType;
- (void)setVCard:(id)arg1;
- (void)setVCardImage:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)vCard;
- (id)vCardImage;
- (id)vCardImageOfSize:(struct CGSize { double x1; double x2; })arg1;

@end