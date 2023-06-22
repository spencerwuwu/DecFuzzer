#ifndef s509retdec_H
#define s509retdec_H

#include "w2c2_base.h"

typedef struct s509retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s509retdecInstance;

void f0(s509retdecInstance*);

void f1(s509retdecInstance*);

U32 f2(s509retdecInstance*);

void f3(s509retdecInstance*,U32);

U32 f4(s509retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s509retdecInstance*,U32,U32,U32,U32,U32);

void f6(s509retdecInstance*,U32);

void f7(s509retdecInstance*,U32,U32,U32);

void f8(s509retdecInstance*,U32,U32,U32);

void s509retdec____wasm_call_ctors(s509retdecInstance*i);

void s509retdec____wasm_apply_data_relocs(s509retdecInstance*i);

U32 s509retdec_func_1(s509retdecInstance*i);

void s509retdec_call_cb(s509retdecInstance*i,U32 l0);

void s509retdecInstantiate(s509retdecInstance* instance, void* resolve(const char* module, const char* name));

void s509retdecFreeInstance(s509retdecInstance* instance);

#endif /* s509retdec_H */

