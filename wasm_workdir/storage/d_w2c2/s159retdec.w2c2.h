#ifndef s159retdec_H
#define s159retdec_H

#include "w2c2_base.h"

typedef struct s159retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s159retdecInstance;

void f0(s159retdecInstance*);

void f1(s159retdecInstance*);

U32 f2(s159retdecInstance*);

void f3(s159retdecInstance*,U32);

U32 f4(s159retdecInstance*,U32,U32,U32,U32);

void f5(s159retdecInstance*,U32,U32,U32,U32,U32);

void f6(s159retdecInstance*,U32);

void f7(s159retdecInstance*,U32,U32,U32);

void f8(s159retdecInstance*,U32,U32,U32);

void s159retdec____wasm_call_ctors(s159retdecInstance*i);

void s159retdec____wasm_apply_data_relocs(s159retdecInstance*i);

U32 s159retdec_func_1(s159retdecInstance*i);

void s159retdec_call_cb(s159retdecInstance*i,U32 l0);

void s159retdecInstantiate(s159retdecInstance* instance, void* resolve(const char* module, const char* name));

void s159retdecFreeInstance(s159retdecInstance* instance);

#endif /* s159retdec_H */

