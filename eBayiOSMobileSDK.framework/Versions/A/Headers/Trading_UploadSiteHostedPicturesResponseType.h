//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_SiteHostedPictureDetailsType;

/**
 
 Contains information about a picture upload (i.e., information about a picture
 upload containing a binary attachment of an image).
 
 
 @ingroup Trading
*/
@interface Trading_UploadSiteHostedPicturesResponseType : Trading_AbstractResponseType {

@private
    NSNumber *pictureSystemVersion;
    Trading_SiteHostedPictureDetailsType *siteHostedPictureDetails;

}


/**
 
 Specifies the picture system version that was used to upload pictures.
 Only version 2 is valid.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pictureSystemVersion;

/**
 
 Contains information about an UploadSiteHostedPictures upload,
 including the URL of the uploaded picture.
 
 
 type : class Trading_SiteHostedPictureDetailsType
*/
@property (nonatomic, retain) Trading_SiteHostedPictureDetailsType *siteHostedPictureDetails;


@end