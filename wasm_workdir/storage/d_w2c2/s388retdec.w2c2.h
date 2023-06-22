#ifndef s388retdec_H
#define s388retdec_H

#include "w2c2_base.h"

typedef struct s388retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s388retdecInstance;

void f0(s388retdecInstance*);

void f1(s388retdecInstance*);

U32 f2(s388retdecInstance*);

void f3(s388retdecInstance*,U32);

U32 f4(s388retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s388retdecInstance*,U32,U32,U32,U32,U32);

void f6(s388retdecInstance*,U32);

void f7(s388retdecInstance*,U32,U32,U32);

void f8(s388retdecInstance*,U32,U32,U32);

void s388retdec____wasm_call_ctors(s388retdecInstance*i);

void s388retdec____wasm_apply_data_relocs(s388retdecInstance*i);

U32 s388retdec_func_1(s388retdecInstance*i);

void s388retdec_call_cb(s388retdecInstance*i,U32 l0);

void s388retdecInstantiate(s388retdecInstance* instance, void* resolve(const char* module, const char* name));

void s388retdecFreeInstance(s388retdecInstance* instance);

#endif /* s388retdec_H */

