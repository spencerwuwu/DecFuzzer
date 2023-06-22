#ifndef s737r2_H
#define s737r2_H

#include "w2c2_base.h"

typedef struct s737r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s737r2Instance;

void f0(s737r2Instance*);

void f1(s737r2Instance*);

U32 f2(s737r2Instance*);

void f3(s737r2Instance*,U32);

U32 f4(s737r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s737r2Instance*,U32,U32,U32,U32,U32);

void f6(s737r2Instance*,U32);

void f7(s737r2Instance*,U32,U32,U32);

void f8(s737r2Instance*,U32,U32,U32);

void s737r2____wasm_call_ctors(s737r2Instance*i);

void s737r2____wasm_apply_data_relocs(s737r2Instance*i);

U32 s737r2_func_1(s737r2Instance*i);

void s737r2_call_cb(s737r2Instance*i,U32 l0);

void s737r2Instantiate(s737r2Instance* instance, void* resolve(const char* module, const char* name));

void s737r2FreeInstance(s737r2Instance* instance);

#endif /* s737r2_H */

