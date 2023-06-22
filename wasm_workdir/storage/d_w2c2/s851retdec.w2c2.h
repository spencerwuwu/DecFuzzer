#ifndef s851retdec_H
#define s851retdec_H

#include "w2c2_base.h"

typedef struct s851retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s851retdecInstance;

void f0(s851retdecInstance*);

void f1(s851retdecInstance*);

U32 f2(s851retdecInstance*);

void f3(s851retdecInstance*,U32);

U32 f4(s851retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s851retdecInstance*,U32,U32,U32,U32,U32);

void f6(s851retdecInstance*,U32);

void f7(s851retdecInstance*,U32,U32,U32);

void f8(s851retdecInstance*,U32,U32,U32);

void s851retdec____wasm_call_ctors(s851retdecInstance*i);

void s851retdec____wasm_apply_data_relocs(s851retdecInstance*i);

U32 s851retdec_func_1(s851retdecInstance*i);

void s851retdec_call_cb(s851retdecInstance*i,U32 l0);

void s851retdecInstantiate(s851retdecInstance* instance, void* resolve(const char* module, const char* name));

void s851retdecFreeInstance(s851retdecInstance* instance);

#endif /* s851retdec_H */

