//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 At least one container is required (minOccurs="1") if Pictures container is present in the request.
 
 
 @ingroup Shopping
*/
@interface Shopping_VariationSpecificPictureSetType : NSObject <EbayNs_Bindable> {

@private
    NSString *variationSpecificValue;
    NSMutableArray *pictureURL;
    NSString *galleryURL;

}


/**
 
 A value that is associated with VariationSpecificName. For example, 
 suppose this set of pictures is showing blue shirts, and some of
 the variations include Color=Blue in their variation specifics. 
 If VariationSpecificName is "Color", then VariationSpecificValue would be "Blue".
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *variationSpecificValue;

/**
 
 The URL of a picture that is associated with VariationSpecificValue.
 The first PictureURL is also used as the gallery picture for 
 applicable variations. 
 For example, if the picture set contains pictures of red shirts
 (i.e., VariationSpecificName=Color and VariationSpecificValue=Red), 
 the first picture is used as the gallery picture for
 all the red shirt variations.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *pictureURL;

/**
 
 Not applicable.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *galleryURL;



@end
