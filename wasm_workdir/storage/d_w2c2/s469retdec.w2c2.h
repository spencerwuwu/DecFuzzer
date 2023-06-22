#ifndef s469retdec_H
#define s469retdec_H

#include "w2c2_base.h"

typedef struct s469retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s469retdecInstance;

void f0(s469retdecInstance*);

void f1(s469retdecInstance*);

U32 f2(s469retdecInstance*);

void f3(s469retdecInstance*,U32);

U32 f4(s469retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s469retdecInstance*,U32,U32,U32,U32,U32);

void f6(s469retdecInstance*,U32);

void f7(s469retdecInstance*,U32,U32,U32);

void f8(s469retdecInstance*,U32,U32,U32);

void s469retdec____wasm_call_ctors(s469retdecInstance*i);

void s469retdec____wasm_apply_data_relocs(s469retdecInstance*i);

U32 s469retdec_func_1(s469retdecInstance*i);

void s469retdec_call_cb(s469retdecInstance*i,U32 l0);

void s469retdecInstantiate(s469retdecInstance* instance, void* resolve(const char* module, const char* name));

void s469retdecFreeInstance(s469retdecInstance* instance);

#endif /* s469retdec_H */

